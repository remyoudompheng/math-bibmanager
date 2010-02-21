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
#include "TreeBib.hpp"

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
  Glib::RefPtr<Gtk::TreeStore> msc_store;
  TreeViewBib* treev;
  Gtk::TreeView* treemsc;
  void refresh_library();
  void _on_treemsc_cursor_changed();

  MathLibrary library;
  std::string library_path;
  MscColumns *msccols_proto;

  void _on_open_activate();
  void _on_about_activate();
  void _on_quit_activate();
};

#endif //!MAIN_WINDOW_H
