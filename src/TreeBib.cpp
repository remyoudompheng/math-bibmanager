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

#include "TreeBib.hpp"

using namespace std;

TreeViewBib::TreeViewBib(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade)
  : Gtk::TreeView(cobject),
    builder(refGlade),
    msc_filter("")
{
  cols_proto = new LibColumns();
  list_widget = Gtk::ListStore::create(*cols_proto);

  // Set sort indicators
  Glib::RefPtr<Glib::Object> col_author, col_title, col_source, col_msc;
  col_author = refGlade->get_object("treecol_author");
  col_title = refGlade->get_object("treecol_title");
  col_source = refGlade->get_object("treecol_source");
  col_msc = refGlade->get_object("treecol_msc");
  Glib::RefPtr<Gtk::TreeViewColumn>::cast_dynamic(col_author)->set_sort_column(cols_proto->author);
  Glib::RefPtr<Gtk::TreeViewColumn>::cast_dynamic(col_title)->set_sort_column(cols_proto->title);
  Glib::RefPtr<Gtk::TreeViewColumn>::cast_dynamic(col_source)->set_sort_column(cols_proto->source);
  Glib::RefPtr<Gtk::TreeViewColumn>::cast_dynamic(col_msc)->set_sort_column(cols_proto->msc);

  // Filters for the bibliography list
  list_filtered = Gtk::TreeModelFilter::create(list_widget);
  list_filtered->set_visible_func( sigc::mem_fun(*this, &TreeViewBib::tree_filter_by_msc) );
  set_model(Gtk::TreeModelSort::create(list_filtered));

  // Propagate the GtkBuilder to the popupmenu.
  popupmenu.ui_builder = refGlade;
}

TreeViewBib::~TreeViewBib() {}

void TreeViewBib::set_filter(std::string filter)
{
  msc_filter = filter;
  list_filtered->refilter();
}

void TreeViewBib::update_tree(MathLibrary library)
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
}

bool TreeViewBib::tree_filter_by_msc(Gtk::TreeModel::const_iterator iter)
{
  if (msc_filter.empty()) return true;
  BibEntry b = (*iter)[cols_proto->bibentry];
  list<MSC2010Entry> l = b.msc_list;
  for(list<MSC2010Entry>::iterator i = l.begin(); i != l.end(); i++)
    {
      if(!i->str().compare(0, msc_filter.length(), msc_filter))
	return true;
    }
  return false;
}

bool TreeViewBib::on_button_press_event(GdkEventButton* event)
// Called for clicks in the article list TreeView
{
  bool res = TreeView::on_button_press_event(event);

  if ((event->type == GDK_BUTTON_PRESS) && (event->button == 3))
    {
      // Right button was pressed
      Gtk::TreeModel::Path tpath;
      // Gtk::TreeViewColumn *col;
      // int cx, cy;
      //      if (get_path_at_pos((int)event->x, (int)event->y, tpath, col, cx, cy))
      //	{
      //      Gtk::TreeIter iter = list_filtered->get_iter(tpath);
      Gtk::TreeIter iter = get_selection()->get_selected();
      BibEntry info = (*iter)[cols_proto->bibentry];
      popupmenu.initialise(info);
      popupmenu.show_all();
      popupmenu.popup(event->button, event->time);
    }

  return res;
}

