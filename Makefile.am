applewmdir = $(includedir)/X11/extensions
applewm_HEADERS = \
        applewmconst.h \
	applewmproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = applewmproto.pc

EXTRA_DIST = applewmproto.pc.in

.PHONY: ChangeLog INSTALL

ChangeLog:
	$(CHANGELOG_CMD)
INSTALL:
	$(INSTALL_CMD)

dist-hook: ChangeLog INSTALL
