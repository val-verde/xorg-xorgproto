recorddir = $(includedir)/X11/extensions
record_HEADERS = \
	recordconst.h \
	recordproto.h \
	recordstr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = recordproto.pc

EXTRA_DIST = recordproto.pc.in

MAINTAINERCLEANFILES = ChangeLog INSTALL

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL
