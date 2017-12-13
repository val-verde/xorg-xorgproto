trapdir = $(includedir)/X11/extensions
trap_HEADERS = \
	xtrapbits.h \
	xtrapddmi.h \
	xtrapdi.h \
	xtrapemacros.h \
	xtraplib.h \
	xtraplibp.h \
	xtrapproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = trapproto.pc

EXTRA_DIST = trapproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog
