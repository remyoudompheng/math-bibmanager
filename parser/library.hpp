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

#ifndef LIBRARY_H
#define LIBRARY_H

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "parser.hpp"
#include "msc2010.hpp"
#include <set>
#include <map>
#include <ftw.h>

extern "C" int read_entry(const char *path,
		      const struct stat *sb,
		      int typeflag);

class MathLibrary
{
public:
  MathLibrary();
  MathLibrary(const char* path);
  virtual ~MathLibrary();
  std::set<BibEntry> entries;

  void print_me();
private:
};

class LibraryMSC
{
public:
  LibraryMSC();
  LibraryMSC(MathLibrary library);

  std::map<int, std::map<char, std::map<int,MSC2010Entry> > > msc_tree;

  void insert_from_bibentry(const BibEntry entry);

  typedef std::map<int, std::map<char, std::map<int,MSC2010Entry> > >::iterator iteratori;
  typedef std::map<char, std::map<int,MSC2010Entry> >::iterator iteratorii;
  typedef std::map<int,MSC2010Entry>::iterator iteratoriii;
};

#endif //!LIBRARY_H
