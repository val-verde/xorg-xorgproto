renderdir = $(includedir)/X11/extensions
render_HEADERS = \
	render.h \
	renderproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = renderproto.pc

renderdocdir = $(datadir)/doc/$(PACKAGE)
renderdoc_DATA = renderproto.txt

EXTRA_DIST = autogen.sh renderproto.pc.in $(renderdoc_DATA)

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	(GIT_DIR=$(top_srcdir)/.git git-log > .changelog.tmp && mv .changelog.tmp ChangeLog; rm -f .changelog.tmp) || (touch ChangeLog; echo 'git directory not found: installing possibly empty changelog.' >&2)

dist-hook: ChangeLog
