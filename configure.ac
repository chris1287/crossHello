#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([crossHello], [1.0])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_CONFIG_HEADERS([config.h])

AC_CONFIG_FILES([
				 Makefile
				 src/Makefile
				 ])

# Checks for programs.
AC_PROG_CC

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h])

### # Define option: --enable-win
###      AC_ARG_ENABLE([win],
###      [  --enable-win    Specific windows options],
###      [case "${enableval}" in
###        yes) win=true ;;
###        no)  win=false ;;
###        *) AC_MSG_ERROR([bad value ${enableval} for --enable-win]) ;;
###      esac],[win=false])
###      AM_CONDITIONAL([WINDOWS], [test x$win = xtrue])

# Check host specific options
case $host in
	*mingw*) win=true ;;
	*) win=false ;;
esac
AM_CONDITIONAL([WINDOWS], [test x$win = xtrue])

AC_OUTPUT
