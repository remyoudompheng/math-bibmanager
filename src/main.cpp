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

#include <gtkmm.h>
#include "UIDefinition.h"
#include "MainWindow.hpp"

#include <iostream>
using namespace std;

int
main (int argc, char *argv[])
{
  Gtk::Main kit(argc, argv);
  Glib::RefPtr<Gtk::Builder> refGlade = Gtk::Builder::create();
  try {
    refGlade->add_from_string(uidef_xml);
  }
  catch(const Gtk::BuilderError& ex)
    {
      std::cerr << "BuilderError: " << ex.what() << std::endl;
      return 1;
    }

  MainWindow *window_main = 0;
  refGlade->get_widget_derived("window_main", window_main);
  if (window_main) {
    window_main->show_all();
    kit.run(*window_main);
  }

  delete window_main;

  return 0;
}

