fontcachedir = $(includedir)/X11/extensions
fontcache_HEADERS = \
	fontcache.h \
	fontcacheP.h \
	fontcachstr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = fontcacheproto.pc

EXTRA_DIST = fontcacheproto.pc.in

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL
