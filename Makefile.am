xf86dgadir = $(includedir)/X11/extensions
xf86dga_HEADERS = \
	xf86dga1.h \
	xf86dga1str.h \
	xf86dga.h \
	xf86dgastr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = xf86dgaproto.pc

EXTRA_DIST = xf86dgaproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog
