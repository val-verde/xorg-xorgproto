xproxymngdir = $(includedir)/X11/PM
xproxymng_HEADERS = \
	PM.h \
	PMproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = xproxymngproto.pc

EXTRA_DIST = autogen.sh xproxymngproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	(GIT_DIR=$(top_srcdir)/.git git-log > .changelog.tmp && mv .changelog.tmp ChangeLog; rm -f .changelog.tmp) || (touch ChangeLog; echo 'git directory not found: installing possibly empty changelog.' >&2)

dist-hook: ChangeLog
