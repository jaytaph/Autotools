#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.67])
AC_INIT([helloworld], [v1.0], [bugs@adayinthelifeof.nl])
AM_INIT_AUTOMAKE
AC_CONFIG_SRCDIR([world2.h])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC
AC_LANG_C
AC_PROG_INSTALL
AC_PROG_MAKE_SET

# Checks for libraries.

# Checks for header files.
AC_HEADER_STDC

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_ARG_ENABLE(world,
        AS_HELP_STRING([--enable-world], [Enable the world message]),
        AC_DEFINE(HAVE_WORLD, 1, [Enables the world message])
        )

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
