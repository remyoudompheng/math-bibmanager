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

#ifndef MSC2010_H
#define MSC2010_H

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string>
#include <iostream>

class MSC2010Entry
{
public:
  MSC2010Entry();
  MSC2010Entry(std::string str);
  MSC2010Entry(int maj, char med, int min);
  int maj;
  char med;
  int min;

  std::string print_major() const;
  std::string print_med() const;
  std::string print_minor() const;

  friend std::istream& operator>> (std::istream &in, MSC2010Entry & ent);

  void assign(std::string str);
};

std::istream& operator>> (std::istream &in, MSC2010Entry & ent);

#endif //!MSC2010_H
