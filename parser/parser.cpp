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

bool get_field(string line, string & field, string delim, string* & tmp)
{
  size_t t = delim.length();
  if ( (line.length() >= t) && !line.compare(0, t, delim) )
    {
      field = line.substr(t);
      tmp = &field;
      return true;
    }
  else
    {
      return false;
    }
}

BibEntry::BibEntry()
{
  // Initialise fields
  an = author = title = la = so = year = dt = msc = ut = ci = "";
  url = doi = arxiv = "";
}

BibEntry::BibEntry(const char* filename)
{
  // Initialise fields
  an = author = title = la = so = year = dt = msc = ut = ci = "";
  url = doi = arxiv = "";

  ifstream source;
  string l; string *current = NULL;
  source.open(filename, ifstream::in);
  while(source.good()) {
    getline(source, l);

    if (get_field(l, an, "an: ", current)) continue;
    if (get_field(l, author, "au: ", current)) continue;
    if (get_field(l, title, "ti: ", current)) continue;
    if (get_field(l, la, "la: ", current)) continue;
    if (get_field(l, so, "so: ", current)) continue;
    if (get_field(l, year, "py: ", current)) continue;
    if (get_field(l, dt, "dt: ", current)) continue;
    if (get_field(l, msc, "cc: ", current)) continue;
    if (get_field(l, ab, "ab: ", current)) continue;
    if (get_field(l, ci, "ci: ", current)) continue;
    if (get_field(l, ut, "ut: ", current)) continue;
    if (get_field(l, rv, "rv: ", current)) continue;

    if (get_field(l, doi, "doi: ", current)) continue;
    if (get_field(l, url, "url: ", current)) continue;
    if (get_field(l, arxiv, "arxiv: ", current)) continue;
    // could not find the beginning of a field, this is probably
    // the continuation of the previous one
    size_t start = l.find_first_not_of(" ");
    if (current && (start != string::npos))
      current->append(" " + l.substr(start));
  }
}

BibEntry::~BibEntry() {}

void BibEntry::print_me() const
{
  cout << "Zbl entry: " << an << endl;
  cout << "Author: " << author << endl;
  cout << "Title: " << title << endl;
  cout << "Lang: " << la << endl;
  cout << "Source: " << so << endl;
  cout << "Year: " << year << endl;
  cout << "Type: " << dt << endl;
  cout << "AMS Cl.: " << msc << endl;
  cout << "Abstract: " << ab << endl;
  cout << "Reviewer: " << rv << endl;

  cout << "DOI: " << doi << endl;
  cout << "URL: " << url << endl;
  cout << "arXiv: " << arxiv << endl;
}

bool BibEntry::operator<(const BibEntry b) const
{
  return (an < b.an);
}
