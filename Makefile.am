videodir = $(includedir)/X11/extensions
video_HEADERS = \
	vldXvMC.h \
	Xv.h \
	XvMC.h \
	XvMCproto.h \
	Xvproto.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = videoproto.pc

dist_doc_DATA = xv-protocol-v2.txt

EXTRA_DIST = videoproto.pc.in

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL
