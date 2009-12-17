randrdir = $(includedir)/X11/extensions
randr_HEADERS = \
	randr.h \
	randrproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = randrproto.pc

dist_doc_DATA = randrproto.txt

EXTRA_DIST = randrproto.pc.in

MAINTAINERCLEANFILES = ChangeLog INSTALL

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL
