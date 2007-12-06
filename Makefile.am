fontcachedir = $(includedir)/X11/extensions
fontcache_HEADERS = \
	fontcache.h \
	fontcacheP.h \
	fontcachstr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = fontcacheproto.pc

EXTRA_DIST = autogen.sh fontcacheproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	(GIT_DIR=$(top_srcdir)/.git git-log > .changelog.tmp && mv .changelog.tmp ChangeLog; rm -f .changelog.tmp) || (touch ChangeLog; echo 'git directory not found: installing possibly empty changelog.' >&2)

dist-hook: ChangeLog
