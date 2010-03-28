xf86dgadir = $(includedir)/X11/extensions
xf86dga_HEADERS = \
	xf86dga.h \
	xf86dga1const.h \
	xf86dga1str.h \
	xf86dga1proto.h \
	xf86dgaconst.h \
	xf86dgaproto.h \
	xf86dgastr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = xf86dgaproto.pc


MAINTAINERCLEANFILES = ChangeLog INSTALL

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL
