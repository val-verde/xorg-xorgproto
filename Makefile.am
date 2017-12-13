applewmdir = $(includedir)/X11/extensions
applewm_HEADERS = \
        applewmconst.h \
	applewmproto.h

applewmprotopkgconfigdir = $(libdir)/pkgconfig
applewmprotopkgconfig_DATA = applewmproto.pc

bigreqsdir = $(includedir)/X11/extensions
bigreqs_HEADERS = \
	bigreqsproto.h \
	bigreqstr.h

bigreqsprotopkgconfigdir = $(libdir)/pkgconfig
bigreqsprotopkgconfig_DATA = bigreqsproto.pc

XCalibrateincludedir = $(includedir)/X11/extensions
XCalibrateinclude_HEADERS = xcalibrateproto.h xcalibratewire.h

calibrateprotopkgconfigdir = $(libdir)/pkgconfig
calibrateprotopkgconfig_DATA = xcalibrateproto.pc

calibrateproto_EXTRA_DIST = autogen.sh xcalibrateproto.pc.in

compositedir = $(includedir)/X11/extensions
composite_HEADERS = \
	composite.h \
	compositeproto.h

compositeprotopkgconfigdir = $(libdir)/pkgconfig
compositeprotopkgconfig_DATA = compositeproto.pc

damagedir = $(includedir)/X11/extensions
damage_HEADERS = \
	damageproto.h \
	damagewire.h

damageprotopkgconfigdir = $(libdir)/pkgconfig
damageprotopkgconfig_DATA = damageproto.pc

dmxdir = $(includedir)/X11/extensions
dmx_HEADERS = \
	dmx.h \
	dmxproto.h

dmxprotopkgconfigdir = $(libdir)/pkgconfig
dmxprotopkgconfig_DATA = dmxproto.pc

dri2dir = $(includedir)/X11/extensions
dri2_HEADERS = dri2proto.h dri2tokens.h

dri2protopkgconfigdir = $(libdir)/pkgconfig
dri2protopkgconfig_DATA = dri2proto.pc

dri3dir = $(includedir)/X11/extensions
dri3_HEADERS = dri3proto.h

dri3protopkgconfigdir = $(libdir)/pkgconfig
dri3protopkgconfig_DATA = dri3proto.pc

eviedir = $(includedir)/X11/extensions
evie_HEADERS = \
	evieproto.h \
	Xeviestr.h

evieprotopkgconfigdir = $(libdir)/pkgconfig
evieprotopkgconfig_DATA = evieproto.pc

evieproto_EXTRA_DIST = evieproto.pc.in

fixesdir = $(includedir)/X11/extensions
fixes_HEADERS = \
	xfixesproto.h \
	xfixeswire.h

fixesprotopkgconfigdir = $(libdir)/pkgconfig
fixesprotopkgconfig_DATA = fixesproto.pc

fontcachedir = $(includedir)/X11/extensions
fontcache_HEADERS = \
	fontcache.h \
	fontcacheP.h \
	fontcachstr.h

fontcacheprotopkgconfigdir = $(libdir)/pkgconfig
fontcacheprotopkgconfig_DATA = fontcacheproto.pc

fontcacheproto_EXTRA_DIST = fontcacheproto.pc.in

fontsdir = $(includedir)/X11/fonts
fonts_HEADERS = \
	font.h \
	fontproto.h \
	fontstruct.h \
	FS.h \
	fsmasks.h \
	FSproto.h

fontsprotopkgconfigdir = $(libdir)/pkgconfig
fontsprotopkgconfig_DATA = fontsproto.pc

gldir = $(includedir)/GL
gl_HEADERS = \
	include/GL/glxint.h \
	include/GL/glxmd.h \
	include/GL/glxproto.h \
	include/GL/glxtokens.h

glinternaldir = $(includedir)/GL/internal
glinternal_HEADERS = \
	include/GL/internal/glcore.h

glprotopkgconfigdir = $(libdir)/pkgconfig
glprotopkgconfig_DATA = glproto.pc

glproto_EXTRA_DIST = meson.build

inputdir = $(includedir)/X11/extensions
input_HEADERS = \
	XI.h \
	XIproto.h \
	XI2.h \
	XI2proto.h

inputprotopkgconfigdir = $(libdir)/pkgconfig
inputprotopkgconfig_DATA = inputproto.pc

kbdir = $(includedir)/X11/extensions
kb_HEADERS = \
	XKBgeom.h \
	XKB.h \
	XKBproto.h \
	XKBsrv.h \
	XKBstr.h

kbprotopkgconfigdir = $(libdir)/pkgconfig
kbprotopkgconfig_DATA = kbproto.pc

lg3ddir = $(includedir)/X11/extensions
lg3d_HEADERS = lgewire.h

lg3dprotopkgconfigdir = $(libdir)/pkgconfig
lg3dprotopkgconfig_DATA = lg3dproto.pc

lg3dproto_EXTRA_DIST = autogen.sh lg3dproto.pc.in

xproxymngdir = $(includedir)/X11/PM
xproxymng_HEADERS = \
	PM.h \
	PMproto.h

pmprotopkgconfigdir = $(libdir)/pkgconfig
pmprotopkgconfig_DATA = xproxymngproto.pc

pmproto_EXTRA_DIST = xproxymngproto.pc.in

presentdir = $(includedir)/X11/extensions
present_HEADERS = presentproto.h presenttokens.h

presentprotopkgconfigdir = $(libdir)/pkgconfig
presentprotopkgconfig_DATA = presentproto.pc

printdir = $(includedir)/X11/extensions
print_HEADERS = \
	Print.h \
	Printstr.h

printprotopkgconfigdir = $(libdir)/pkgconfig
printprotopkgconfig_DATA = printproto.pc

miscmandir = $(MISC_MAN_DIR)
miscman_DATA =	man/Xprint.$(MISC_MAN_SUFFIX)
CLEANFILES = $(miscman_DATA)

printproto_EXTRA_DIST = 	printproto.pc.in	\
		man/Xprint.man		\
		man/Xprint.sgml		\
		specs/xp_proto.book	\
		specs/xp_proto.mif	\
		specs/xp_proto.ps	\
		specs/xp_protoIX.doc	\
		specs/xp_protoTOC.doc	\
		specs/xp_proto_cov.mif

SED = sed

XORGRELSTRING = @PACKAGE_STRING@
  XORGMANNAME = X Version 11

MAN_SUBSTS = \
        -e 's|__vendorversion__|"$(XORGRELSTRING)" "$(XORGMANNAME)"|' \
        -e 's|__xorgversion__|"$(XORGRELSTRING)" "$(XORGMANNAME)"|' \
        -e 's|__datadir__|$(datadir)|g' \
        -e 's|__libdir__|$(libdir)|g' \
        -e 's|__sysconfdir__|$(sysconfdir)|g' \
        -e 's|__appmansuffix__|$(APP_MAN_SUFFIX)|g' \
        -e 's|__libmansuffix__|$(LIB_MAN_SUFFIX)|g' \
        -e 's|__miscmansuffix__|$(MISC_MAN_SUFFIX)|g'

SUFFIXES = .$(MISC_MAN_SUFFIX) .man

.man.$(MISC_MAN_SUFFIX): man
	$(MKDIR_P) man
	$(AM_V_GEN)$(SED) $(MAN_SUBSTS) < $< > $@
randrdir = $(includedir)/X11/extensions
randr_HEADERS = \
	randr.h \
	randrproto.h

randrprotopkgconfigdir = $(libdir)/pkgconfig
randrprotopkgconfig_DATA = randrproto.pc

recorddir = $(includedir)/X11/extensions
record_HEADERS = \
	recordconst.h \
	recordproto.h \
	recordstr.h

recordprotopkgconfigdir = $(libdir)/pkgconfig
recordprotopkgconfig_DATA = recordproto.pc

renderdir = $(includedir)/X11/extensions
render_HEADERS = \
	render.h \
	renderproto.h

renderprotopkgconfigdir = $(libdir)/pkgconfig
renderprotopkgconfig_DATA = renderproto.pc

resourcedir = $(includedir)/X11/extensions
resource_HEADERS = \
	XResproto.h

resourceprotopkgconfigdir = $(libdir)/pkgconfig
resourceprotopkgconfig_DATA = resourceproto.pc

scrnsaverdir = $(includedir)/X11/extensions
scrnsaver_HEADERS = \
	saver.h \
	saverproto.h

scrnsaverprotopkgconfigdir = $(libdir)/pkgconfig
scrnsaverprotopkgconfig_DATA = scrnsaverproto.pc

trapdir = $(includedir)/X11/extensions
trap_HEADERS = \
	xtrapbits.h \
	xtrapddmi.h \
	xtrapdi.h \
	xtrapemacros.h \
	xtraplib.h \
	xtraplibp.h \
	xtrapproto.h

trapprotopkgconfigdir = $(libdir)/pkgconfig
trapprotopkgconfig_DATA = trapproto.pc

trapproto_EXTRA_DIST = trapproto.pc.in

videodir = $(includedir)/X11/extensions
video_HEADERS = \
	vldXvMC.h \
	Xv.h \
	XvMC.h \
	XvMCproto.h \
	Xvproto.h

videoprotopkgconfigdir = $(libdir)/pkgconfig
videoprotopkgconfig_DATA = videoproto.pc

windowswmdir = $(includedir)/X11/extensions
windowswm_HEADERS = \
        windowswm.h \
	windowswmstr.h

windowswmprotopkgconfigdir = $(libdir)/pkgconfig
windowswmprotopkgconfig_DATA = windowswmproto.pc

xprotodir = $(includedir)/X11
xproto_HEADERS = \
	ap_keysym.h \
	DECkeysym.h \
	HPkeysym.h \
	keysymdef.h \
	keysym.h \
	Sunkeysym.h \
	Xalloca.h \
	Xarch.h \
	Xatom.h \
	Xdefs.h \
	XF86keysym.h \
	Xfuncs.h \
	X.h \
	Xmd.h \
	Xosdefs.h \
	Xos.h \
	Xos_r.h \
	Xproto.h \
	Xprotostr.h \
	Xthreads.h \
	Xw32defs.h \
	XWDFile.h \
	Xwindows.h \
	Xwinsock.h

nodist_xproto_HEADERS = \
	Xfuncproto.h \
	Xpoll.h

x11protopkgconfigdir = $(libdir)/pkgconfig
x11protopkgconfig_DATA = xproto.pc

xcmiscdir = $(includedir)/X11/extensions
xcmisc_HEADERS = \
	xcmiscproto.h \
	xcmiscstr.h

xcmiscprotopkgconfigdir = $(libdir)/pkgconfig
xcmiscprotopkgconfig_DATA = xcmiscproto.pc

xextdir = $(includedir)/X11/extensions
xext_HEADERS = \
	dpmsconst.h \
	dpmsproto.h \
        ge.h \
        geproto.h \
	lbx.h \
	lbxproto.h \
	mitmiscconst.h \
	mitmiscproto.h \
	multibufconst.h \
	multibufproto.h \
	secur.h \
	securproto.h \
	shapeconst.h \
	shapeproto.h \
	shm.h \
	shmproto.h \
	syncconst.h \
	syncproto.h \
	ag.h \
	agproto.h \
	cup.h \
	cupproto.h \
	dbe.h \
	dbeproto.h \
	EVI.h \
	EVIproto.h \
	xtestext1proto.h \
	xtestext1const.h \
	xtestconst.h \
	xtestproto.h

compatdir = $(xextdir)
compat_HEADERS = \
	shapestr.h \
	shmstr.h \
	syncstr.h

xextprotopkgconfigdir = $(libdir)/pkgconfig
xextprotopkgconfig_DATA = xextproto.pc

xf86bigfontdir = $(includedir)/X11/extensions
xf86bigfont_HEADERS = \
	xf86bigfont.h \
	xf86bigfproto.h \
	xf86bigfstr.h

xf86bigfontprotopkgconfigdir = $(libdir)/pkgconfig
xf86bigfontprotopkgconfig_DATA = xf86bigfontproto.pc

xf86dgadir = $(includedir)/X11/extensions
xf86dga_HEADERS = \
	xf86dga.h \
	xf86dga1const.h \
	xf86dga1str.h \
	xf86dga1proto.h \
	xf86dgaconst.h \
	xf86dgaproto.h \
	xf86dgastr.h

xf86dgaprotopkgconfigdir = $(libdir)/pkgconfig
xf86dgaprotopkgconfig_DATA = xf86dgaproto.pc

xf86dridir = $(includedir)/X11/dri
xf86dri_HEADERS = xf86dri.h xf86dristr.h xf86driproto.h

xf86driprotopkgconfigdir = $(libdir)/pkgconfig
xf86driprotopkgconfig_DATA = xf86driproto.pc

xf86miscdir = $(includedir)/X11/extensions
xf86misc_HEADERS = \
	xf86misc.h \
	xf86mscstr.h

xf86miscprotopkgconfigdir = $(libdir)/pkgconfig
xf86miscprotopkgconfig_DATA = xf86miscproto.pc

xf86miscproto_EXTRA_DIST = xf86miscproto.pc.in

xf86rushdir = $(includedir)/X11/extensions
xf86rush_HEADERS = \
	xf86rush.h \
	xf86rushstr.h

xf86rushprotopkgconfigdir = $(libdir)/pkgconfig
xf86rushprotopkgconfig_DATA = xf86rushproto.pc

xf86rushproto_EXTRA_DIST = xf86rushproto.pc.in

xf86vidmodedir = $(includedir)/X11/extensions
xf86vidmode_HEADERS = \
	xf86vm.h \
	xf86vmproto.h \
	xf86vmstr.h

xf86vidmodeprotopkgconfigdir = $(libdir)/pkgconfig
xf86vidmodeprotopkgconfig_DATA = xf86vidmodeproto.pc

xineramadir = $(includedir)/X11/extensions
xinerama_HEADERS = \
	panoramiXproto.h

xineramaprotopkgconfigdir = $(libdir)/pkgconfig
xineramaprotopkgconfig_DATA = xineramaproto.pc

# SUBDIRS=specs

dist_doc_DATA = \
	compositeproto.txt \
	damageproto.txt \
	dri2proto.txt \
	dri3proto.txt \
	fixesproto.txt \
	PM_spec \
	presentproto.txt \
	randrproto.txt \
	renderproto.txt \
	resproto.txt \
	xv-protocol-v2.txt
