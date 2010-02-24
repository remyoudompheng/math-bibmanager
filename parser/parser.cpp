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
#include <sstream>
#include <sys/stat.h>

using namespace std;

bool get_field(const string line, string & field,
	       const string delim, string* & tmp)
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
  msc_list.clear();
}

BibEntry::BibEntry(const char* filename)
{
  // Initialise fields
  an = author = title = la = so = year = dt = msc = ut = ci = "";
  url = doi = arxiv = "";
  msc_list.clear();

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

  parse_msc_entries();

  // Look for an associated file
  string f(filename);
  size_t lastdot = f.find_last_of(".");
  if (lastdot != string::npos) {
    f = f.substr(0, lastdot);
    struct stat statinfo;
    string document = f + ".pdf";
    if (! stat(document.c_str(), &statinfo)
	&& S_ISREG(statinfo.st_mode))
      {
#ifdef DEBUG
	cout << "Found pdf file: " << document << endl;
#endif
	docpath = document;
      }
    // Look for a DjVu file
    document = f + ".djvu";
    if (! stat(document.c_str(), &statinfo)
	&& S_ISREG(statinfo.st_mode))
      {
#ifdef DEBUG
	cout << "Found djvu file: " << document << endl;
#endif
	docpath = document;
      }
  }
}

BibEntry::~BibEntry() {}

void BibEntry::parse_msc_entries()
{
  size_t start = msc.find_first_not_of(" *");
  stringstream s;
  MSC2010Entry ent;
  if (start != string::npos) {
    s.str(msc.substr(start));
    while (s.good())
      {
	s >> ent;
	msc_list.push_back(ent);
      }
  }
}

string print_msc_list(list<MSC2010Entry> l)
{
  ostringstream s(ostringstream::out);
  list<MSC2010Entry>::iterator i;
  for(i = l.begin(); i != l.end(); i++)
    s << i->print_major() << endl;
  return s.str();
}

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

  cout << print_msc_list(msc_list);
  cout << endl;
}

bool BibEntry::operator<(const BibEntry b) const
{
  return (an < b.an);
}

string BibEntry::amsrefs() const
{
  ostringstream s(ostringstream::out);
  // should behave differently depending on document type
  s << "\bib{" << an << "}{article{" << endl;
  s << "  author={" << author << "}," << endl;
  s << "  title={" << title << "}," << endl;
  s << "  date={" << year << "}," << endl;
  s << "  journal={" << so << "}," << endl;
  s << "}" << endl;

  return s.str()
}
