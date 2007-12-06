videodir = $(includedir)/X11/extensions
video_HEADERS = \
	vldXvMC.h \
	Xv.h \
	XvMC.h \
	XvMCproto.h \
	Xvproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = videoproto.pc

EXTRA_DIST = autogen.sh videoproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	(GIT_DIR=$(top_srcdir)/.git git-log > .changelog.tmp && mv .changelog.tmp ChangeLog; rm -f .changelog.tmp) || (touch ChangeLog; echo 'git directory not found: installing possibly empty changelog.' >&2)

dist-hook: ChangeLog
