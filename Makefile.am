fontsdir = $(includedir)/X11/fonts
fonts_HEADERS = \
	font.h \
	fontproto.h \
	fontstruct.h \
	FS.h \
	fsmasks.h \
	FSproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = fontsproto.pc

EXTRA_DIST = autogen.sh fontsproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	(GIT_DIR=$(top_srcdir)/.git git-log > .changelog.tmp && mv .changelog.tmp ChangeLog; rm -f .changelog.tmp) || (touch ChangeLog; echo 'git directory not found: installing possibly empty changelog.' >&2)

dist-hook: ChangeLog
