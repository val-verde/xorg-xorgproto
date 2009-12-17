renderdir = $(includedir)/X11/extensions
render_HEADERS = \
	render.h \
	renderproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = renderproto.pc

dist_doc_DATA = renderproto.txt

EXTRA_DIST = renderproto.pc.in

MAINTAINERCLEANFILES = ChangeLog INSTALL

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL
