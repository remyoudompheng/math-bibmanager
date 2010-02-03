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

#include "parser.hpp"
#include <ifstream>

#ifdef DEBUG
#include <iostream>
#endif

using namespace std;

BibEntry::BibEntry(const char* filename)
{
  // Initialise fields
  an = au = ti = la = so = py = dt = cc = url = doi = arxiv = "";

  ifstream source;
  string l;
  source.open(filename, ifstream::in);
  while(source.good()) {
    getline(source, l);
    if(l.compare(0, 4, "an: ")) {
      an = l.substr(4);
#ifdef DEBUG
      cout << "an = " << an;
#endif
    }
  }
}

BibEntry::~BibEntry() {}
