xproxymngdir = $(includedir)/X11/PM
xproxymng_HEADERS = \
	PM.h \
	PMproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = xproxymngproto.pc

EXTRA_DIST = xproxymngproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog
