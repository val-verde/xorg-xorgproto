# Copyright © 2018 Intel Corporation

# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:

# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

project('xorgproto', license : 'MIT', version : '2018.0')
pkg = import('pkgconfig')

# core
install_headers(
    'include/X11/ap_keysym.h',
    'include/X11/DECkeysym.h',
    'include/X11/HPkeysym.h',
    'include/X11/keysymdef.h',
    'include/X11/keysym.h',
    'include/X11/Sunkeysym.h',
    'include/X11/Xalloca.h',
    'include/X11/Xarch.h',
    'include/X11/Xatom.h',
    'include/X11/Xdefs.h',
    'include/X11/XF86keysym.h',
    'include/X11/Xfuncs.h',
    'include/X11/X.h',
    'include/X11/Xmd.h',
    'include/X11/Xosdefs.h',
    'include/X11/Xos.h',
    'include/X11/Xos_r.h',
    'include/X11/Xproto.h',
    'include/X11/Xprotostr.h',
    'include/X11/Xthreads.h',
    'include/X11/Xw32defs.h',
    'include/X11/XWDFile.h',
    'include/X11/Xwindows.h',
    'include/X11/Xwinsock.h',
    subdir : 'X11')

# proxy manager
install_headers(
    'include/X11/PM/PM.h',
    'include/X11/PM/PMproto.h',
    subdir : 'X11/PM'
)

# fonts
install_headers(
    'include/X11/fonts/font.h',
    'include/X11/fonts/fontproto.h',
    'include/X11/fonts/fontstruct.h',
    'include/X11/fonts/FS.h',
    'include/X11/fonts/fsmasks.h',
    'include/X11/fonts/FSproto.h',
    subdir : 'X11/fonts'
)

# dri1
install_headers(
    'include/X11/dri/xf86dri.h',
    'include/X11/dri/xf86driproto.h',
    'include/X11/dri/xf86dristr.h',
    subdir : 'X11/dri'
)

# GL
install_headers(
    'include/GL/glxint.h',
    'include/GL/glxmd.h',
    'include/GL/glxproto.h',
    'include/GL/glxtokens.h',
    subdir : 'GL')
install_headers('include/GL/internal/glcore.h', subdir : 'GL/internal')

# all other extensions
install_headers(
    'include/X11/extensions/ag.h',
    'include/X11/extensions/agproto.h',
    'include/X11/extensions/applewmconst.h',
    'include/X11/extensions/applewmproto.h',
    'include/X11/extensions/bigreqsproto.h',
    'include/X11/extensions/bigreqstr.h',
    'include/X11/extensions/composite.h',
    'include/X11/extensions/compositeproto.h',
    'include/X11/extensions/cup.h',
    'include/X11/extensions/cupproto.h',
    'include/X11/extensions/damageproto.h',
    'include/X11/extensions/damagewire.h',
    'include/X11/extensions/dbe.h',
    'include/X11/extensions/dbeproto.h',
    'include/X11/extensions/dmx.h',
    'include/X11/extensions/dmxproto.h',
    'include/X11/extensions/dpmsconst.h',
    'include/X11/extensions/dpmsproto.h',
    'include/X11/extensions/dri2proto.h',
    'include/X11/extensions/dri2tokens.h',
    'include/X11/extensions/dri3proto.h',
    'include/X11/extensions/EVI.h',
    'include/X11/extensions/EVIproto.h',
    'include/X11/extensions/ge.h',
    'include/X11/extensions/geproto.h',
    'include/X11/extensions/lbx.h',
    'include/X11/extensions/lbxproto.h',
    'include/X11/extensions/mitmiscconst.h',
    'include/X11/extensions/mitmiscproto.h',
    'include/X11/extensions/multibufconst.h',
    'include/X11/extensions/multibufproto.h',
    'include/X11/extensions/panoramiXproto.h',
    'include/X11/extensions/presentproto.h',
    'include/X11/extensions/presenttokens.h',
    'include/X11/extensions/randr.h',
    'include/X11/extensions/randrproto.h',
    'include/X11/extensions/recordconst.h',
    'include/X11/extensions/recordproto.h',
    'include/X11/extensions/recordstr.h',
    'include/X11/extensions/render.h',
    'include/X11/extensions/renderproto.h',
    'include/X11/extensions/saver.h',
    'include/X11/extensions/saverproto.h',
    'include/X11/extensions/secur.h',
    'include/X11/extensions/securproto.h',
    'include/X11/extensions/shapeconst.h',
    'include/X11/extensions/shapeproto.h',
    'include/X11/extensions/shapestr.h',
    'include/X11/extensions/shm.h',
    'include/X11/extensions/shmproto.h',
    'include/X11/extensions/shmstr.h',
    'include/X11/extensions/syncconst.h',
    'include/X11/extensions/syncproto.h',
    'include/X11/extensions/syncstr.h',
    'include/X11/extensions/vldXvMC.h',
    'include/X11/extensions/windowswm.h',
    'include/X11/extensions/windowswmstr.h',
    'include/X11/extensions/xcmiscproto.h',
    'include/X11/extensions/xcmiscstr.h',
    'include/X11/extensions/xf86bigfont.h',
    'include/X11/extensions/xf86bigfproto.h',
    'include/X11/extensions/xf86bigfstr.h',
    'include/X11/extensions/xf86dga1const.h',
    'include/X11/extensions/xf86dga1proto.h',
    'include/X11/extensions/xf86dga1str.h',
    'include/X11/extensions/xf86dgaconst.h',
    'include/X11/extensions/xf86dga.h',
    'include/X11/extensions/xf86dgaproto.h',
    'include/X11/extensions/xf86dgastr.h',
    'include/X11/extensions/xf86misc.h',
    'include/X11/extensions/xf86mscstr.h',
    'include/X11/extensions/xf86vm.h',
    'include/X11/extensions/xf86vmproto.h',
    'include/X11/extensions/xf86vmstr.h',
    'include/X11/extensions/xfixesproto.h',
    'include/X11/extensions/xfixeswire.h',
    'include/X11/extensions/XI2.h',
    'include/X11/extensions/XI2proto.h',
    'include/X11/extensions/XI.h',
    'include/X11/extensions/XIproto.h',
    'include/X11/extensions/XKBgeom.h',
    'include/X11/extensions/XKB.h',
    'include/X11/extensions/XKBproto.h',
    'include/X11/extensions/XKBsrv.h',
    'include/X11/extensions/XKBstr.h',
    'include/X11/extensions/XResproto.h',
    'include/X11/extensions/xtestconst.h',
    'include/X11/extensions/xtestext1const.h',
    'include/X11/extensions/xtestext1proto.h',
    'include/X11/extensions/xtestproto.h',
    'include/X11/extensions/xtrapbits.h',
    'include/X11/extensions/xtrapddmi.h',
    'include/X11/extensions/xtrapdi.h',
    'include/X11/extensions/xtrapemacros.h',
    'include/X11/extensions/xtraplib.h',
    'include/X11/extensions/xtraplibp.h',
    'include/X11/extensions/xtrapproto.h',
    'include/X11/extensions/Xv.h',
    'include/X11/extensions/XvMC.h',
    'include/X11/extensions/XvMCproto.h',
    'include/X11/extensions/Xvproto.h',
    subdir : 'X11/extensions'
)

pcs = [
        ['applewmproto',        '1.4.2'],
        ['bigreqsproto',        '1.1.2'],
        ['compositeproto',      '0.4.2'],
        ['damageproto',         '1.2.1'],
        ['dmxproto',            '2.3.1'],
        ['dri2proto',           '2.8'],
        ['dri3proto',           '1.0'],
        ['fixesproto',          '5.0'],
        ['fontsproto',          '2.1.3'],
        ['glproto',             '1.4.17'],
        ['inputproto',          '2.3.2'],
        ['kbproto',             '1.0.6'],
        ['presentproto',        '1.0'],
        ['randrproto',          '1.5.0'],
        ['recordproto',         '1.14.2'],
        ['renderproto',         '0.11.1'],
        ['resourceproto',       '1.2.0'],
        ['scrnsaverproto',      '1.2.2'],
        ['trapproto',           '3.4.3'],
        ['videoproto',          '2.3.3'],
        ['windowswmproto',      '1.0.4'],
        ['xcmiscproto',         '1.2.2'],
        ['xextproto',           '7.3.0'],
        ['xf86bigfontproto',    '1.2.0'],
        ['xf86dgaproto',        '2.1'],
        ['xf86driproto',        '2.1.1'],
        ['xf86miscproto',       '0.9.3'],
        ['xf86vidmodeproto',    '2.3.1'],
        ['xineramaproto',       '1.2.1'],
        ['xproto',              '7.0.31'],
        ['xproxymngproto',      '1.0.3'],
]

foreach pc : pcs
    pkg.generate(
        name : pc[0],
        filebase : pc[0],
        description : pc[0] + ' headers',
        version : pc[1],
        install_dir : get_option('datadir') + '/pkgconfig'
    )
endforeach

# legacy
if get_option('legacy') == true
    install_headers(
        'include/X11/extensions/evieproto.h',
        'include/X11/extensions/fontcache.h',
        'include/X11/extensions/fontcacheP.h',
        'include/X11/extensions/fontcachstr.h',
        'include/X11/extensions/lgewire.h',
        'include/X11/extensions/Print.h',
        'include/X11/extensions/Printstr.h',
        'include/X11/extensions/xcalibrateproto.h',
        'include/X11/extensions/xcalibratewire.h',
        'include/X11/extensions/Xeviestr.h',
        'include/X11/extensions/xf86rush.h',
        'include/X11/extensions/xf86rushstr.h',
        subdir : 'X11/extensions'
    )
    legacy_pcs = [
        ['evieproto', '1.1.1'],
        ['fontcacheproto', '0.1.3'],
        ['lg3dproto', '5.0'],
        ['printproto', '1.0.5'],
        ['xcalibrateproto', '0.1.0'],
        ['xf86rushproto', '1.2.2'],
    ]
    foreach pc : legacy_pcs
        pkg.generate(
            name : pc[0],
            filebase : pc[0],
            description : pc[0] + ' headers',
            version : pc[1],
            install_dir : get_option('datadir') + '/pkgconfig'
        )
    endforeach
endif

ext_xorgproto = declare_dependency(
    include_directories : include_directories('include')
)
