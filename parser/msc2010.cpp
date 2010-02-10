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

#include "msc2010.hpp"
#include "msc2010_db.h"

#include <sstream>

using namespace std;

MSC2010Entry::MSC2010Entry()
{
}

MSC2010Entry::MSC2010Entry(int min, char med, int maj)
  : min(min),
    med(med),
    maj(maj)
{
}

MSC2010Entry::MSC2010Entry(string str)
{
  stringstream s (str.substr(0,2) + " " + str[2] + " " + str.substr(3,2));
  s >> maj >> med >> min;
}

void MSC2010Entry::assign(string str)
{
  stringstream s (str.substr(0,2) + " " + str[2] + " " + str.substr(3,2));
  s >> maj >> med >> min;
}

istream& operator>> (istream &in, MSC2010Entry & ent)
{
  string token;
  in >> token;
  ent.assign(token);
}

std::string MSC2010Entry::str() const
{
  stringstream s;
  s.fill('0'); s.width(2); s << right << maj;
  s.width(1); s << med;
  s.width(2); s << right << min;
  return s.str();
}

std::string MSC2010Entry::print_major() const
{
  string s = msc2010_print_major(maj);
  return s;
}

std::string MSC2010Entry::print_med() const
{
  string s = msc2010_print_medium(maj, med);
  return s;
}

std::string MSC2010Entry::print_minor() const
{
  string s = msc2010_print_minor(maj, med, min);
  return s;
}

