xf86bigfontdir = $(includedir)/X11/extensions
xf86bigfont_HEADERS = \
	xf86bigfont.h \
	xf86bigfstr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = xf86bigfontproto.pc

EXTRA_DIST = autogen.sh xf86bigfontproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	(GIT_DIR=$(top_srcdir)/.git git-log > .changelog.tmp && mv .changelog.tmp ChangeLog; rm -f .changelog.tmp) || (touch ChangeLog; echo 'git directory not found: installing possibly empty changelog.' >&2)

dist-hook: ChangeLog
