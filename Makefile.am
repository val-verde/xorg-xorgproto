xf86dgadir = $(includedir)/X11/extensions
xf86dga_HEADERS = \
	xf86dga1.h \
	xf86dga1str.h \
	xf86dga.h \
	xf86dgastr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = xf86dgaproto.pc

EXTRA_DIST = autogen.sh xf86dgaproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	(GIT_DIR=$(top_srcdir)/.git git-log > .changelog.tmp && mv .changelog.tmp ChangeLog; rm -f .changelog.tmp) || (touch ChangeLog; echo 'git directory not found: installing possibly empty changelog.' >&2)

dist-hook: ChangeLog
