#!/bin/sh

# This will create different kind of macro's which are stored in a file called aclocal.m4
aclocal

# Will generate a config.h.in header file (used in the next chapters)
autoheader

# Automake "coverts" the Makefile.in into a Makefile.am. It aslso copies some files which are needed by autoconf and configure (and make). We can either supply them ourself, but those files are so general, automake can provide them as well.
automake --add-missing --copy

# Generates a ./configure from several sources: Makefile.im, aclocal.m4 and config.h.in.
autoconf

# Finally, we can run ./configure that will create our Makefile and other files (like config.h)
./configure

# Ok, all done, Make our software
make

# And install it
sudo make install
