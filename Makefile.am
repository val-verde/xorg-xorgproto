scrnsaverdir = $(includedir)/X11/extensions
scrnsaver_HEADERS = \
	saver.h \
	saverproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = scrnsaverproto.pc

EXTRA_DIST = autogen.sh scrnsaverproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	(GIT_DIR=$(top_srcdir)/.git git-log > .changelog.tmp && mv .changelog.tmp ChangeLog; rm -f .changelog.tmp) || (touch ChangeLog; echo 'git directory not found: installing possibly empty changelog.' >&2)

dist-hook: ChangeLog
