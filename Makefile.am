# Place generated object files (.o) into the same directory as their source
# files, in order to avoid collisions when non-recursive make is used.
AUTOMAKE_OPTIONS = subdir-objects

SUBDIRS = src

if WINDOWS
AM_CPPFLAGS = -DHOST_WINDOWS
else
AM_CPPFLAGS = -DHOST_LINUX
endif
