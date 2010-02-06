

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

#ifndef PARSER_H
#define PARSER_H

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string>
#include <list>
#include "msc2010.hpp"

class BibEntry
{
public:
  BibEntry();
  BibEntry(const char *filename);
  virtual ~BibEntry();

  std::string an, author, title, la, so, year, dt, msc, ut, ci, ab, rv;
  std::string url, doi, arxiv;
  std::list<MSC2010Entry> msc_list;
  void print_me() const;
  bool operator< (const BibEntry b) const;

private:
  void parse_msc_entries();
};

#endif //!PARSER_H
