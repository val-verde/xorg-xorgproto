xf86vidmodedir = $(includedir)/X11/extensions
xf86vidmode_HEADERS = \
	xf86vmode.h \
	xf86vmstr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = xf86vidmodeproto.pc

EXTRA_DIST = autogen.sh xf86vidmodeproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	(GIT_DIR=$(top_srcdir)/.git git-log > .changelog.tmp && mv .changelog.tmp ChangeLog; rm -f .changelog.tmp) || (touch ChangeLog; echo 'git directory not found: installing possibly empty changelog.' >&2)

dist-hook: ChangeLog
