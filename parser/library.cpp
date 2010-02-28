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

#ifdef HAVE_FTW_H
#include <ftw.h>
#else
#include <glibmm.h>
#endif

using namespace std;

#define DEPTHBUF 10

set<BibEntry>* entries_ptr;

MathLibrary::MathLibrary()
{
  entries = set<BibEntry>();
}

MathLibrary::~MathLibrary() {}

#ifdef HAVE_FTW_H
// Helper function
extern "C" int read_entry(const char *path,
		      const struct stat *sb,
		      int typeflag)
{
  string spath = path;
  if (spath.compare(spath.size() - 3, 3, ".zb") == 0) {
#ifdef DEBUG
    cout << spath << endl;
#endif
    entries_ptr->insert(BibEntry(path));
  }
  return 0;
}

// Initialise a library from the zb files in a directory
MathLibrary::MathLibrary(const char* path)
{
  entries_ptr = &(this->entries);
  ftw(path, read_entry, DEPTHBUF);
}
#else
MathLibrary::MathLibrary(const char* path)
{
  try {
    std::string p = path;
    Glib::Dir directory(p);
    for(Glib::DirIterator it = directory.begin();
	it != directory.end(); it++)
      {
	if ((*it).compare((*it).size() - 3, 3, ".zb") == 0)
	  {
#ifdef DEBUG
	    cout << p << *it << endl;
#endif
	    entries.insert(BibEntry((p + *it).c_str()));
	  }
      }
  }
  catch(const Glib::FileError& ex) {
    std::cerr << "FileError: " << ex.what() << std::endl;
    return;
  }
}
#endif

void MathLibrary::print_me() const
{
  set<BibEntry>::iterator iter;
  for (iter = entries.begin(); iter != entries.end(); iter++)
    {
      iter->print_me();
    }
}

LibraryMSC::LibraryMSC()
{
  msc_tree.clear();
}

// Create a list of tags fom a library
LibraryMSC::LibraryMSC(const MathLibrary library)
{
  msc_tree.clear();

  set<BibEntry>::iterator iter;
  for (iter = library.entries.begin();
       iter != library.entries.end();
       iter++)
    {
      insert_from_bibentry(*iter);
    }
}

void LibraryMSC::insert_from_bibentry(const BibEntry entry)
{
  list<MSC2010Entry> l = entry.msc_list;
  list<MSC2010Entry>::iterator it;
  for(it = l.begin(); it != l.end(); it++)
    {
      msc_tree[it->maj][it->med][it->min] = *it;
    }
}
