scrnsaverdir = $(includedir)/X11/extensions
scrnsaver_HEADERS = \
	saver.h \
	saverproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = scrnsaverproto.pc

EXTRA_DIST = scrnsaverproto.pc.in

MAINTAINERCLEANFILES = ChangeLog INSTALL

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL
