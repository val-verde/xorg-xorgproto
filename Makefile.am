recorddir = $(includedir)/X11/extensions
record_HEADERS = \
	record.h \
	recordstr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = recordproto.pc

EXTRA_DIST = autogen.sh recordproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	(GIT_DIR=$(top_srcdir)/.git git-log > .changelog.tmp && mv .changelog.tmp ChangeLog; rm -f .changelog.tmp) || (touch ChangeLog; echo 'git directory not found: installing possibly empty changelog.' >&2)

dist-hook: ChangeLog
