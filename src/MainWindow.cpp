/*
 * math-bibmanager
 * A Bibliography manager for mathematicians
 *
 * Copyright (C) 2010 Rémy Oudompheng

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "MainWindow.hpp"
#include "UImenubar.h"
#include <sstream>

using namespace std;

MainWindow::MainWindow(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade)
  : Gtk::Window(cobject),
    uidef(refGlade)
{
  // Menu item callbacks
  Glib::RefPtr<Gtk::ActionGroup> ref_actgroup = Gtk::ActionGroup::create();
  Glib::RefPtr<Gtk::UIManager> ref_uiman = Gtk::UIManager::create();
  ref_actgroup->add(Gtk::Action::create("LibraryMenu", "Library"));
  ref_actgroup->add(Gtk::Action::create("LibOpen", "_Open folder..."),
		    sigc::mem_fun(*this, &MainWindow::_on_open_activate));
  ref_actgroup->add(Gtk::Action::create("LibRefresh", "_Refresh"),
		    sigc::mem_fun(*this, &MainWindow::refresh_library));
  ref_actgroup->add(Gtk::Action::create("About", "_About..."),
		    sigc::mem_fun(*this, &MainWindow::_on_about_activate));
  ref_actgroup->add(Gtk::Action::create("Quit", "_Quit"),
		    sigc::mem_fun(*this, &MainWindow::_on_quit_activate));

  ref_uiman->insert_action_group(ref_actgroup);
  ref_uiman->add_ui_from_string(menubar_ui);
  Gtk::Widget* menubar = ref_uiman->get_widget("/bar");

  // Put menubar in vbox
  Gtk::VBox *box;
  uidef->get_widget("vbox_big", box);
  box->pack_start(*menubar, Gtk::PACK_SHRINK);
  box->reorder_child(*menubar, 0);

  // Tree View
  uidef->get_widget_derived("tree_docs", treev);

  // MSC Classification
  uidef->get_widget("tree_msc", treemsc);
  msccols_proto = new MscColumns();
  msc_store = Gtk::TreeStore::create(*msccols_proto);
  treemsc->set_model(msc_store);
  treemsc->signal_cursor_changed().connect( sigc::mem_fun(*this, &MainWindow::_on_treemsc_cursor_changed) );

  // Set code dialog font to monospace
  Gtk::TextView *src_view;
  refGlade->get_widget("srcwin_text", src_view);
  src_view->modify_font(Pango::FontDescription("monospace"));
  show_all();
}

MainWindow::~MainWindow()
{
}

// Bibliography tree
void MainWindow::open_library(string dirpath)
{
  library_path = dirpath;
  library = MathLibrary(dirpath.c_str());
  update_tree();
}

void MainWindow::refresh_library()
{
  if (library_path.empty()) return;
  library = MathLibrary(library_path.c_str());
  update_tree();
}

void MainWindow::fill_tree(MathLibrary source)
{
  library = source;
  update_tree();
}

void MainWindow::update_tree()
{
  treev->update_tree(library);

  LibraryMSC msc_tags(library);
  fill_msc(msc_tags);
}

// MSC tree
void MainWindow::fill_msc(LibraryMSC source)
{
  Gtk::TreeIter prow, prow2, prow3;
  LibraryMSC::iteratori   it1;
  LibraryMSC::iteratorii  it2;
  LibraryMSC::iteratoriii it3;
  MSC2010Entry ploum;
  stringstream s; s.fill('0');

  msc_store->clear();

  // Root node
  prow = msc_store->append();
  (*prow)[msccols_proto->filter] = "";
  (*prow)[msccols_proto->caption] = "All categories";
  (*prow)[msccols_proto->entry] = ploum;
  // Other nodes
  for(it1 = source.begin(); it1 != source.end(); it1++)
    {
      ploum.maj = it1->first;
      prow = msc_store->append();
      s.str(""); s.width(2); s << right << ploum.maj;
      (*prow)[msccols_proto->filter] = s.str();
      s << " " << ploum.print_major();
      (*prow)[msccols_proto->caption] = s.str();
      (*prow)[msccols_proto->entry] = ploum;

      for(it2 = it1->second.begin(); it2 != it1->second.end(); it2++)
	{
	  ploum.med = it2->first;
	  prow2 = msc_store->append(prow->children());
	  s.str(""); s.width(2); s << right << ploum.maj;
	  s.width(1); s << ploum.med;
	  (*prow2)[msccols_proto->filter] = s.str();
	  s << " " << ploum.print_med();
	  (*prow2)[msccols_proto->caption] = s.str();
	  (*prow2)[msccols_proto->entry] = ploum;

	  for(it3 = it2->second.begin(); it3 != it2->second.end(); it3++)
	    {
	      ploum.min = it3->first;
	      prow3 = msc_store->append(prow2->children());
	      s.str(""); s << ploum.str();
	      (*prow3)[msccols_proto->filter] = s.str();
	      s << " " << ploum.print_minor();
	      (*prow3)[msccols_proto->caption] = s.str();
	      (*prow3)[msccols_proto->entry] = ploum;
	    }
	}
    }
}

// Widget callbacks
void MainWindow::_on_treemsc_cursor_changed()
{
  Gtk::TreeModel::Path path;
  Gtk::TreeViewColumn* focus_column;
  treemsc->get_cursor(path, focus_column);
  Gtk::TreeIter iter = msc_store->get_iter(path);
  // Set filter appropriately
  treev->set_filter((*iter)[msccols_proto->filter]);
}

// Menu item callbacks
void MainWindow::_on_open_activate()
{
  Gtk::FileChooserDialog dialog("Choose a library folder",
				Gtk::FILE_CHOOSER_ACTION_SELECT_FOLDER);
  dialog.add_button(Gtk::Stock::CANCEL, Gtk::RESPONSE_CANCEL);
  dialog.add_button(Gtk::Stock::OPEN, Gtk::RESPONSE_OK);

  int result = dialog.run();
  if (result == Gtk::RESPONSE_OK)
    {
      library_path = dialog.get_filename();
      refresh_library();
    }
}

void MainWindow::_on_about_activate()
{
  Gtk::AboutDialog dialog;
  dialog.set_program_name(PACKAGE_NAME);
  dialog.set_version(PACKAGE_VERSION);
  dialog.set_authors(list<string>(1, PACKAGE_AUTHORS));
  // dialog.set_license(PACKAGE_LICENSE);
  dialog.set_copyright(PACKAGE_COPYRIGHT);

  dialog.run();
}

void MainWindow::_on_quit_activate()
{
  Gtk::Main::quit();
}
