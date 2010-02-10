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

using namespace std;

MainWindow::MainWindow(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade)
  : Gtk::Window(cobject),
    uidef(refGlade),
    msc_filter("")
{
  // File Menu item callbacks
  Gtk::MenuItem* mi_quit = 0;
  uidef->get_widget("mi_quit", mi_quit);
  mi_quit->signal_activate().connect( sigc::mem_fun(*this, &MainWindow::_on_quit_activate) );

  // Tree View
  Gtk::TreeView* treev = 0;
  uidef->get_widget("tree_docs", treev);
  cols_proto = new LibColumns();
  list_widget = Gtk::ListStore::create(*cols_proto);

  // Filters for the bibliography list
  list_filtered = Gtk::TreeModelFilter::create(list_widget);
  list_filtered->set_visible_func( sigc::mem_fun(*this, &MainWindow::tree_filter_by_msc) );
  treev->set_model(Gtk::TreeModelSort::create(list_filtered));

  // MSC Classification
  uidef->get_widget("tree_msc", treemsc);
  msccols_proto = new MscColumns();
  msc_store = Gtk::TreeStore::create(*msccols_proto);
  treemsc->set_model(msc_store);
  treemsc->signal_cursor_changed().connect( sigc::mem_fun(*this, &MainWindow::_on_treemsc_cursor_changed) );
}

MainWindow::~MainWindow()
{
}

// Bibliography tree
void MainWindow::open_library(string dirpath)
{
  library = MathLibrary(dirpath.c_str());
  update_tree();
}

void MainWindow::fill_tree(MathLibrary source)
{
  library = source;
  update_tree();
}

void MainWindow::update_tree()
{
  list_widget->clear();
  set<BibEntry>::iterator it;
  Gtk::TreeIter itt;
  for(it = library.entries.begin(); it != library.entries.end(); it++)
    {
      itt = list_widget->append();
      (*itt)[cols_proto->author] = it->author;
      (*itt)[cols_proto->title] = it->title;
      (*itt)[cols_proto->msc] = it->msc;
      (*itt)[cols_proto->source] = it->so;
      (*itt)[cols_proto->bibentry] = (*it);
    }

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

bool MainWindow::tree_filter_by_msc(Gtk::TreeModel::const_iterator iter)
{
  BibEntry b = (*iter)[cols_proto->bibentry];
  list<MSC2010Entry> l = b.msc_list;
  for(list<MSC2010Entry>::iterator i = l.begin(); i != l.end(); i++)
    {
      if(!i->str().compare(0, msc_filter.length(), msc_filter))
	return true;
    }
  return false;
}

void MainWindow::_on_treemsc_cursor_changed()
{
  Gtk::TreeModel::Path path;
  Gtk::TreeViewColumn* focus_column;
  treemsc->get_cursor(path, focus_column);
  Gtk::TreeIter iter = msc_store->get_iter(path);
  // Set filter appropriately
  msc_filter = (*iter)[msccols_proto->filter];
  list_filtered->refilter();
}

// File Menu item callbacks
void MainWindow::_on_quit_activate()
{
  Gtk::Main::quit();
}
