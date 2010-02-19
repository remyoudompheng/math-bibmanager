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

#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <gtkmm.h>
#include <string>
#include <library.hpp>
#include <msc2010.hpp>

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

class MscColumns : public Gtk::TreeModel::ColumnRecord
{
public:
  MscColumns() {
    add(caption); add(entry); add(filter);
  }

  Gtk::TreeModelColumn<Glib::ustring> caption; // 0
  Gtk::TreeModelColumn<MSC2010Entry> entry;    // 1
  Gtk::TreeModelColumn<std::string> filter;    // 2
};

class MainWindow : public Gtk::Window
{
public:
  MainWindow(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade);
  virtual ~MainWindow();
  void open_library(std::string dirpath);
  void fill_tree(MathLibrary source);
  void fill_msc(LibraryMSC source);
  void update_tree();

protected:
  Glib::RefPtr<Gtk::Builder> uidef;
  Glib::RefPtr<Gtk::ListStore> list_widget;
  Glib::RefPtr<Gtk::TreeModelFilter> list_filtered;

  Glib::RefPtr<Gtk::TreeStore> msc_store;
  Gtk::TreeView* treemsc;
  std::string msc_filter;
  bool tree_filter_by_msc(Gtk::TreeModel::const_iterator iter);
  void refresh_library();
  void _on_treemsc_cursor_changed();

  MathLibrary library;
  std::string library_path;
  LibColumns *cols_proto;
  MscColumns *msccols_proto;

  void _on_open_activate();
  void _on_about_activate();
  void _on_quit_activate();
};

#endif //!MAIN_WINDOW_H
