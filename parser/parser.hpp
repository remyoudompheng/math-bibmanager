

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

#include <string>
#include <list>
#include "msc2010.hpp"


class Link
{
public:
  enum proto {
    UNKNOWN,
    HTTP,
    DOI,
    ARXIV,
    NUMDAM,
    CRELLE
  };

  Link(std::istream &in);
  proto type;
  std::string id;
  std::string url;

  friend std::istream& operator>> (std::istream &in, Link & ent);
};
std::istream& operator>> (std::istream &in, Link & ent);

class BibEntry
{
public:
  BibEntry();
  BibEntry(const char *filename);
  virtual ~BibEntry();

  std::string an, author, title, la, so, year, dt, msc, ut, ci, ab, rv;
  std::string link;
  std::list<Link> links;
  std::string url, doi, arxiv;
  // Path of the associated document
  std::string docpath;
  std::list<MSC2010Entry> msc_list;
  void print_me() const;
  std::string amsrefs() const;
  bool operator< (const BibEntry & b) const;

private:
  void parse_msc_entries();
  void translate_links();
};

#endif //!PARSER_H
