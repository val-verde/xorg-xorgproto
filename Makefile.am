xf86rushdir = $(includedir)/X11/extensions
xf86rush_HEADERS = \
	xf86rush.h \
	xf86rushstr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = xf86rushproto.pc

EXTRA_DIST = autogen.sh xf86rushproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	(GIT_DIR=$(top_srcdir)/.git git-log > .changelog.tmp && mv .changelog.tmp ChangeLog; rm -f .changelog.tmp) || (touch ChangeLog; echo 'git directory not found: installing possibly empty changelog.' >&2)

dist-hook: ChangeLog
