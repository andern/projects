#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

CFLAGS="$CFLAGS -Iinclude"

AC_PREREQ([2.69])
AC_INIT([article], [0.1.0], [Andreas Halle])
AM_INIT_AUTOMAKE([1.13 -Wall no-define])

AC_CONFIG_SRCDIR([src])

AC_PROG_CC
AM_PROG_CC_C_O

AC_CHECK_HEADERS([stdio.h])
AC_CHECK_HEADERS([stdlib.h])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
