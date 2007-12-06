kbdir = $(includedir)/X11/extensions
kb_HEADERS = \
	XKBgeom.h \
	XKB.h \
	XKBproto.h \
	XKBsrv.h \
	XKBstr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = kbproto.pc

EXTRA_DIST = autogen.sh kbproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	(GIT_DIR=$(top_srcdir)/.git git-log > .changelog.tmp && mv .changelog.tmp ChangeLog; rm -f .changelog.tmp) || (touch ChangeLog; echo 'git directory not found: installing possibly empty changelog.' >&2)

dist-hook: ChangeLog
