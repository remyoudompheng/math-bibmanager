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

#define LIBRARY_PATH "/home/oudomphe/textes/articles"
const char library_path[] = LIBRARY_PATH;

#include "MainWindow.hpp"

MainWindow::MainWindow(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade)
  : Gtk::Window(cobject),
    uidef(refGlade)
{
  // File Menu item callbacks
  Gtk::MenuItem* mi_quit = 0;
  uidef->get_widget("mi_quit", mi_quit);
  mi_quit->signal_activate().connect( sigc::mem_fun(*this, &MainWindow::_on_quit_activate) );

  // Tree View
  Gtk::TreeView* treev = 0;
  uidef->get_widget("tree_docs", treev);
  Glib::RefPtr<Glib::Object> obj = uidef->get_object("list_docs");
  list_widget = Glib::RefPtr<Gtk::ListStore>::cast_static(obj);
  library = MathLibrary(library_path);
  update_tree();
}

MainWindow::~MainWindow()
{
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
      itt->set_value(COL_AUTHOR, it->author);
      itt->set_value(COL_TITLE, it->title);
    }
}

// File Menu item callbacks
void MainWindow::_on_quit_activate()
{
  Gtk::Main::quit();
}
