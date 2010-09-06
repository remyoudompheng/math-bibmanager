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

#include <gtkmm.h>
#include <gtk/gtk.h>
#include <parser.hpp>

class BibEntryPopup : public Gtk::Menu
{
public:
  BibEntryPopup();
  BibEntryPopup(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade);
  BibEntryPopup(BibEntry source);
  virtual ~BibEntryPopup();

  void initialise(BibEntry source);

  Glib::RefPtr<Gtk::Builder> ui_builder;

protected:
  void new_item(const Glib::ustring label, const sigc::slot<void> slot);

  BibEntry entry;
  void _on_open_activate();
#if GTK_VERSION_GE(2,14)
  void _on_url_activate();
  void _on_doi_activate();
  void _on_arxiv_activate();
  void _on_link_activate(const Link l);
#endif
  void _on_copy_url_activate();
  void _on_copy_doi_activate();
  void _on_copy_arxiv_activate();
  void _on_copy_link_activate(const Link l);
  void _on_amsrefs_activate();
};

#endif //!BIB_POPUP_H
