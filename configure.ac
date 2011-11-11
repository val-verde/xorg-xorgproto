AC_PREREQ([2.60])
AC_INIT([InputProto], [2.1.99.2], [https://bugs.freedesktop.org/enter_bug.cgi?product=xorg])
AM_INIT_AUTOMAKE([foreign dist-bzip2])
AM_MAINTAINER_MODE

# Require xorg-macros: XORG_WITH_ASCIIDOC
m4_ifndef([XORG_MACROS_VERSION],
          [m4_fatal([must install xorg-macros 1.10 or later before running autoconf/autogen])])
XORG_MACROS_VERSION(1.10)
XORG_DEFAULT_OPTIONS
XORG_ENABLE_SPECS
XORG_WITH_ASCIIDOC(8.4.5)

AC_ARG_ENABLE(unstable-protocol,
              AS_HELP_STRING([--enable-unstable-protocol],
                             [Enables compilation of yet-to-be-finalised protocol (default: disabled)]),
              [UNSTABLE_PROTO=$enableval], [UNSTABLE_PROTO=no])
if ! test "x$UNSTABLE_PROTO" = xyes; then
    AC_MSG_ERROR([This branch contains protocol elements which have not yet been finalised.  When this branch is updated, you will probably need to recompile both the server, libXi, and input-using clients, and may experience crashes or undefined behaviour if you do not.])
fi

AC_OUTPUT([Makefile
           specs/Makefile
           inputproto.pc])
