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

#ifndef TREE_BIB_H
#define TREE_BIB_H

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <gtkmm.h>
#include <library.hpp>
#include "BibPopup.hpp"

class TreeViewBib : public Gtk::TreeView
{
public:
  TreeViewBib(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade);
  virtual ~TreeViewBib();

  void set_filter(std::string filter);
  void update_tree(MathLibrary library);

protected:
  class LibColumns : public Gtk::TreeModel::ColumnRecord
  {
  public:
    LibColumns() {
      add(author); add(title); add(source);
      add(msc); add(bibentry);
    }

    Gtk::TreeModelColumn<Glib::ustring> author; // 0
    Gtk::TreeModelColumn<Glib::ustring> title;  // 1
    Gtk::TreeModelColumn<Glib::ustring> source; // 2
    Gtk::TreeModelColumn<Glib::ustring> msc;    // 3
    Gtk::TreeModelColumn<BibEntry> bibentry;
  };

  Glib::RefPtr<Gtk::Builder> builder;
  Glib::RefPtr<Gtk::ListStore> list_widget;
  Glib::RefPtr<Gtk::TreeModelFilter> list_filtered;
  BibEntryPopup popupmenu;
  
  std::string msc_filter;
  LibColumns *cols_proto;

  bool tree_filter_by_msc(Gtk::TreeModel::const_iterator iter);
  virtual bool on_button_press_event(GdkEventButton* event);
};

#endif //!TREE_BIB_H
