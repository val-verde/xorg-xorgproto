windowswmdir = $(includedir)/X11/extensions
windowswm_HEADERS = \
        windowswm.h \
	windowswmstr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = windowswmproto.pc

EXTRA_DIST = windowswmproto.pc.in

MAINTAINERCLEANFILES = ChangeLog INSTALL

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL
