                                               -*- Autoconf -*-
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
AC_CHECK_HEADER([json/json.h], [], [])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_CHECK_LIB([json],[json_object_get],[
	AC_SUBST([JSON_LIBS],["-ljson"])
	AC_DEFINE(HAVE_JSON, [1], [JSON is enabled])
	])

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
