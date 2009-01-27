printdir = $(includedir)/X11/extensions
print_HEADERS = \
	Print.h \
	Printstr.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = printproto.pc

EXTRA_DIST = printproto.pc.in

EXTRA_DIST += ChangeLog
MAINTAINERCLEANFILES = ChangeLog

.PHONY: ChangeLog

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog
