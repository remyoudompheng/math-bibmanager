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

#include "BibPopup.hpp"

BibEntryPopup::BibEntryPopup()
{
}

BibEntryPopup::BibEntryPopup(BibEntry source)
{
  initialise(source);
}

BibEntryPopup::~BibEntryPopup() {}

void BibEntryPopup::initialise(BibEntry source)
{
  entry = source;
  Gtk::Menu_Helpers::MenuList& children = items();
  children.clear();

  if( !(source.doi.empty()) )
    {
      children.push_back(Gtk::Menu_Helpers::MenuElem(
	"Open _DOI in browser (" + source.doi + ")",
	sigc::mem_fun(*this, &BibEntryPopup::_on_doi_activate) ));
    }
  if( !(source.arxiv.empty()) )
    {
      children.push_back(Gtk::Menu_Helpers::MenuElem(
	"Open article on _arXiv:" + source.arxiv,
	sigc::mem_fun(*this, &BibEntryPopup::_on_arxiv_activate) ));
    }

  show_all();
}

// Callbacks
void BibEntryPopup::_on_doi_activate()
{
  gtk_show_uri(NULL, ("http://dx.doi.org/" + entry.doi).c_str(), GDK_CURRENT_TIME, NULL);
}

void BibEntryPopup::_on_arxiv_activate()
{
  gtk_show_uri(NULL, ("http://arxiv.org/abs/" + entry.arxiv).c_str(), GDK_CURRENT_TIME, NULL);
}
