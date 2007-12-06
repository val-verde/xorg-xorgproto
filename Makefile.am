trapdir = $(includedir)/X11/extensions
trap_HEADERS = \
	xtrapbits.h \
	xtrapddmi.h \
	xtrapdi.h \
	xtrapemacros.h \
	xtraplib.h \
	xtraplibp.h \
	xtrapproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = trapproto.pc

EXTRA_DIST = autogen.sh trapproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	(GIT_DIR=$(top_srcdir)/.git git-log > .changelog.tmp && mv .changelog.tmp ChangeLog; rm -f .changelog.tmp) || (touch ChangeLog; echo 'git directory not found: installing possibly empty changelog.' >&2)

dist-hook: ChangeLog
