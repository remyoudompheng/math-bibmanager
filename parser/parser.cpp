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
#include <fstream>
#include <iostream>

using namespace std;

BibEntry::BibEntry(const char* filename)
{
  // Initialise fields
  an = author = title = la = so = year = dt = cc = url = doi = arxiv = "";

  ifstream source;
  string l; string *current = NULL;
  source.open(filename, ifstream::in);
  while(source.good()) {
    getline(source, l);
    if( (l.length() >= 4) && !(l.compare(0, 4, "an: ")) ) {
      an = l.substr(4);
#ifdef DEBUG
      cout << "an = " << an << endl;
#endif
      current = &an;
      continue;
    }
    if( (l.length() >= 4) && !(l.compare(0, 4, "au: ")) ) {
      author = l.substr(4);
      current = &author;
      continue;
    }
    if( (l.length() >= 4) && !(l.compare(0, 4, "ti: ")) ) {
      title = l.substr(4);
      current = &title;
      continue;
    }
    if( (l.length() >= 4) && !(l.compare(0, 4, "la: ")) ) {
      la = l.substr(4);
      current = &la;
      continue;
    }
    if( (l.length() >= 4) && !(l.compare(0, 4, "so: ")) ) {
      so = l.substr(4);
      current = &so;
      continue;
    }
    if( (l.length() >= 4) && !(l.compare(0, 4, "py: ")) ) {
      year = l.substr(4);
      current = &year;
      continue;
    }
    
    size_t start = l.find_first_not_of(" ");
    if (current && (start != string::npos))
      current->append(" " + l.substr(start));
  }
}

BibEntry::~BibEntry() {}

void BibEntry::print_me()
{
  cout << "Zbl entry: " << an << endl;
  cout << "Author: " << author << endl;
  cout << "Title: " << title << endl;
  cout << "Lang: " << la << endl;
  cout << "Source: " << so << endl;
  cout << "Year: " << year << endl;
}
