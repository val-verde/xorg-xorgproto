/*
 * $Id: compositeproto.h,v 1.1 2003-10-30 04:31:19 keithp Exp $
 *
 * Copyright © 2003 Keith Packard
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of Keith Packard not be used in
 * advertising or publicity pertaining to distribution of the software without
 * specific, written prior permission.  Keith Packard makes no
 * representations about the suitability of this software for any purpose.  It
 * is provided "as is" without express or implied warranty.
 *
 * KEITH PACKARD DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
 * EVENT SHALL KEITH PACKARD BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _APPORTIONPROTO_H_
#define _APPORTIONPROTO_H_

#include <X11/Xmd.h>
#include <X11/extensions/apportion.h>

#define Window CARD32
#define Region CARD32

/* 
 * requests and replies
 */
typedef struct {
    CARD8   reqType;
    CARD8   apportionReqType;
    CARD16  length B16;
    CARD32  majorVersion B32;
    CARD32  minorVersion B32;
} xApportionQueryVersionReq;

#define sz_xApportionQueryVersionReq   12

typedef struct {
    BYTE    type;   /* X_Reply */
    BYTE    pad1;
    CARD16  sequenceNumber B16;
    CARD32  length B32;
    CARD32  majorVersion B32;
    CARD32  minorVersion B32;
    CARD32  pad2 B32;
    CARD32  pad3 B32;
    CARD32  pad4 B32;
    CARD32  pad5 B32;
} xApportionQueryVersionReply;

#define sz_xApportionQueryVersionReply	32

typedef struct {
    CARD8   reqType;
    CARD8   apportionReqType;
    CARD16  length B16;
    Window  window B32;
    CARD8   update;
    CARD8   pad1;
    CARD16  pad2 B16;
} xApportionRedirectWindowReq;

#define sz_xApportionRedirectWindowReq	12

typedef struct {
    CARD8   reqType;
    CARD8   apportionReqType;
    CARD16  length B16;
    Window  window B32;
    CARD8   update;
    CARD8   pad1;
    CARD16  pad2 B16;
} xApportionRedirectWindowsReq;

#define sz_xApportionRedirectWindowsReq	    12

typedef struct {
    CARD8   reqType;
    CARD8   apportionReqType;
    CARD16  length B16;
    Window  window B32;
} xApportionUnredirectWindowReq;

#define sz_xApportionUnredirectWindowReq    8

typedef struct {
    CARD8   reqType;
    CARD8   apportionReqType;
    CARD16  length B16;
    Window  window B32;
} xApportionUnredirectWindowsReq;

#define sz_xApportionUnredirectWindowsReq   8

typedef struct {
    CARD8   reqType;
    CARD8   apportionReqType;
    CARD16  length B16;
    Region  region B32;
    Window  window B32;
} xApportionCreateRegionFromBorderClipReq;

#define sz_xApportionCreateRegionFromBorderClipReq  12

#undef Window
#undef Region

#endif /* _APPORTIONPROTO_H_ */
