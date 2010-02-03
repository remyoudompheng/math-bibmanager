/*
 * math-bibmanager
 * A Bibliography manager for mathematicians
 *
 * Copyright (C) 2010 Rémy Oudompheng
 *
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

#include "library.hpp"
#include <iostream>

#define DEPTHBUF 10

set<BibEntry>* entries_ptr;

MathLibrary::MathLibrary()
{
  entries = set<BibEntry>();
}

// Initialise a library from the zb files in a directory
MathLibrary::MathLibrary(const char* path)
{
  entries_ptr = &(this->entries);
  ftw(path, read_entry, DEPTHBUF);
}

// Helper function
extern "C" int read_entry(const char *path,
		      const struct stat *sb,
		      int typeflag)
{
  string spath = path;
  if (spath.compare(spath.size() - 3, 3, ".zb") == 0) {
    cout << spath << endl;
    entries_ptr->insert(BibEntry(path));
  }
  return 0;
}

MathLibrary::~MathLibrary() {}

void MathLibrary::print_me()
{
  set<BibEntry>::iterator iter;
  for (iter = entries.begin(); iter != entries.end(); iter++)
    {
      iter->print_me();
    }
}
