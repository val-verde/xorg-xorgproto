xf86rushdir = $(includedir)/X11/extensions
xf86rush_HEADERS = \
	xf86rush.h \
	xf86rushstr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = xf86rushproto.pc

EXTRA_DIST = xf86rushproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog
