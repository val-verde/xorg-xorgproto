bigreqsdir = $(includedir)/X11/extensions
bigreqs_HEADERS = \
	bigreqsproto.h \
	bigreqstr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = bigreqsproto.pc

EXTRA_DIST = bigreqsproto.pc.in

MAINTAINERCLEANFILES = ChangeLog INSTALL

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL
