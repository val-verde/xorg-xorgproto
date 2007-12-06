gldir = $(includedir)/GL
gl_HEADERS = \
	glxint.h \
	glxmd.h \
	glxproto.h \
	glxtokens.h

glinternaldir = $(includedir)/GL/internal
glinternal_HEADERS = \
	glcore.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = glproto.pc

EXTRA_DIST = autogen.sh glproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	(GIT_DIR=$(top_srcdir)/.git git-log > .changelog.tmp && mv .changelog.tmp ChangeLog; rm -f .changelog.tmp) || (touch ChangeLog; echo 'git directory not found: installing possibly empty changelog.' >&2)

dist-hook: ChangeLog
