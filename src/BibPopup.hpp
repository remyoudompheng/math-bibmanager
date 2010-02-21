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

#ifndef BIB_POPUP_H
#define BIB_POPUP_H

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <gtkmm.h>
#include <parser.hpp>

class BibEntryPopup : public Gtk::Menu
{
public:
  BibEntryPopup();
  BibEntryPopup(BibEntry source);
  virtual ~BibEntryPopup();

  void initialise(BibEntry source);

protected:
  BibEntry entry;
  void _on_doi_activate();
  void _on_arxiv_activate();
}; 

#endif //!BIB_POPUP_H
