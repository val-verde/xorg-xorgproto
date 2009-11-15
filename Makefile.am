eviedir = $(includedir)/X11/extensions
evie_HEADERS = \
	evieproto.h \
	Xeviestr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = evieproto.pc

EXTRA_DIST = evieproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL
