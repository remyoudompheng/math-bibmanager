#!/bin/sh

aclocal
autoheader
autoconf
automake -a --foreign

echo "running ./configure $*"
./configure $*
