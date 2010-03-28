xf86bigfontdir = $(includedir)/X11/extensions
xf86bigfont_HEADERS = \
	xf86bigfont.h \
	xf86bigfproto.h \
	xf86bigfstr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = xf86bigfontproto.pc


MAINTAINERCLEANFILES = ChangeLog INSTALL

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL
