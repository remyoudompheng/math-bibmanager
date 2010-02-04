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
#include <library.hpp>

class LibColumns : public Gtk::TreeModel::ColumnRecord
{
public:
  LibColumns() { add(author); add(title); add(msc); add(bibentry); }

  Gtk::TreeModelColumn<Glib::ustring> author;
  Gtk::TreeModelColumn<Glib::ustring> title;
  Gtk::TreeModelColumn<Glib::ustring> msc;
  Gtk::TreeModelColumn<BibEntry> bibentry;
};

class MainWindow : public Gtk::Window
{
public:
  MainWindow(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade);
  virtual ~MainWindow();
  void fill_tree(MathLibrary source);
  void update_tree();

protected:
  Glib::RefPtr<Gtk::Builder> uidef;
  Glib::RefPtr<Gtk::ListStore> list_widget;

  MathLibrary library;
  LibColumns *cols_proto;

  void _on_quit_activate();
};

#endif //!MAIN_WINDOW_H
