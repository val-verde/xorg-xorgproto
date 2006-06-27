/*
 * Copyright © 2000 Compaq Computer Corporation
 * Copyright © 2002 Hewlett-Packard Company
 * Copyright © 2006 Intel Corporation
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that copyright
 * notice and this permission notice appear in supporting documentation, and
 * that the name of the copyright holders not be used in advertising or
 * publicity pertaining to distribution of the software without specific,
 * written prior permission.  The copyright holders make no representations
 * about the suitability of this software for any purpose.  It is provided "as
 * is" without express or implied warranty.
 *
 * THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
 * EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE
 * OF THIS SOFTWARE.
 *
 * Author:  Jim Gettys, Hewlett-Packard Company, Inc.
 *	    Keith Packard, Intel Corporation
 */

/* note that RANDR 1.0 is incompatible with version 0.0, or 0.1 */
/* V1.0 removes depth switching from the protocol */
#ifndef _XRANDRP_H_
#define _XRANDRP_H_

#include <X11/extensions/randr.h>

#define Window CARD32
#define Drawable CARD32
#define Font CARD32
#define Pixmap CARD32
#define Cursor CARD32
#define Colormap CARD32
#define GContext CARD32
#define Atom CARD32
#define Time CARD32
#define KeyCode CARD8
#define KeySym CARD32

#define Rotation CARD16
#define SizeID CARD16
#define SubpixelOrder CARD16
#define ModeID CARD16

/*
 * data structures
 */

typedef struct {
    CARD16 widthInPixels B16;
    CARD16 heightInPixels B16;
    CARD16 widthInMillimeters B16;
    CARD16 heightInMillimeters B16;
} xScreenSizes;
#define sz_xScreenSizes 8

/* 
 * requests and replies
 */

typedef struct {
    CARD8   reqType;
    CARD8   randrReqType;
    CARD16  length B16;
    CARD32  majorVersion B32;
    CARD32  minorVersion B32;
} xRRQueryVersionReq;
#define sz_xRRQueryVersionReq   12

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
} xRRQueryVersionReply;
#define sz_xRRQueryVersionReply	32

typedef struct {
    CARD8   reqType;
    CARD8   randrReqType;
    CARD16  length B16;
    Window  window B32;
} xRRGetScreenInfoReq;
#define sz_xRRGetScreenInfoReq   8

/* 
 * the xRRScreenInfoReply structure is followed by:
 *
 * the size information
 */


typedef struct {
    BYTE    type;   /* X_Reply */
    BYTE    setOfRotations;
    CARD16  sequenceNumber B16;
    CARD32  length B32;
    Window  root B32;
    Time    timestamp B32;
    Time    configTimestamp B32;
    CARD16  nSizes B16;
    SizeID  sizeID B16;
    Rotation  rotation B16;
    CARD16  rate B16;
    CARD16  nrateEnts B16;
    CARD16  pad B16;
} xRRGetScreenInfoReply;
#define sz_xRRGetScreenInfoReply	32

typedef struct {
    CARD8    reqType;
    CARD8    randrReqType;
    CARD16   length B16;
    Drawable drawable B32;
    Time     timestamp B32;
    Time     configTimestamp B32;
    SizeID   sizeID B16;
    Rotation rotation B16;
} xRR1_0SetScreenConfigReq;
#define sz_xRR1_0SetScreenConfigReq   20

typedef struct {
    CARD8    reqType;
    CARD8    randrReqType;
    CARD16   length B16;
    Drawable drawable B32;
    Time     timestamp B32;
    Time     configTimestamp B32;
    SizeID   sizeID B16;
    Rotation rotation B16;
    CARD16   rate B16;
    CARD16   pad B16;
} xRRSetScreenConfigReq;
#define sz_xRRSetScreenConfigReq   24

typedef struct {
    BYTE    type;   /* X_Reply */
    CARD8   status;
    CARD16  sequenceNumber B16;
    CARD32  length B32;
    Time    newTimestamp B32;  
    Time    newConfigTimestamp B32;
    Window  root;
    CARD16  subpixelOrder B16;
    CARD16  pad4 B16;
    CARD32  pad5 B32;
    CARD32  pad6 B32;
} xRRSetScreenConfigReply;
#define sz_xRRSetScreenConfigReply 32

typedef struct {
    CARD8   reqType;
    CARD8   randrReqType;
    CARD16  length B16;
    Window  window B32;
    CARD16  enable B16;
    CARD16  pad2 B16;
} xRRSelectInputReq;
#define sz_xRRSelectInputReq   12

/*
 * Additions for version 1.2
 */

typedef struct {
    CARD8   reqType;
    CARD8   randrReqType;
    CARD16  length B16;
    Window	window B32;
} xRRGetScreenSizeRangeReq;
#define sz_xRRGetScreenSizeRangeReq 8

typedef struct {
    BYTE    type;   /* X_Reply */
    CARD8   status;
    CARD16  sequenceNumber B16;
    CARD32  length B32;
    CARD16  minWidth B16;
    CARD16  minHeight B16;
    CARD16  maxWidth B16;
    CARD16  maxHeight B16;
    CARD32  pad0 B32;
    CARD32  pad1 B32;
    CARD32  pad2 B32;
    CARD32  pad3 B32;
} xRRGetScreenSizeRangeReply;
#define sz_xRRGetScreenSizeRangeReply 32

typedef struct {
    CARD8   reqType;
    CARD8   randrReqType;
    CARD16  length B16;
    Window  window B32;
    CARD16  width B16;
    CARD16  height B16;
    CARD32  widthInMillimeters B32;
    CARD32  heightInMillimeters B32;
} xRRSetScreenSizeReq;
#define sz_xRRSetScreenSizeReq	    20

typedef struct {
    CARD8   reqType;
    CARD8   randrReqType;
    CARD16  length B16;
    Window  window B32;
} xRRGetMonitorModesReq;
    
typedef struct {
    BYTE    type;   /* X_Reply */
    CARD8   status;
    CARD16  sequenceNumber B16;
    CARD32  length B32;
    Window  root B32;
    CARD16  i B16;
    CARD16  m B16;
    CARD16  b B16;
    CARD16  pad0 B16;
    CARD32  pad1 B32;
    CARD32  pad2 B32;
    CARD32  pad3 B32;
} xRRGetMonitorModesReply;
#define sz_xRRGetMonitorModesReply 32

typedef struct {
    Time	timestamp B32;
    Time	configTimestamp B32;
    INT16	x B16;
    INT16	y B16;
    Rotation	rotation B16;
    ModeID	mode B16;
    ModeID	defaultMode B16;
    Rotation	rotations B16;
    CARD16	firstMode B16;
    CARD16	numModes B16;
} xRRMonitorInfo;
#define sz_xRRMonitorInfo   24

typedef struct {
    CARD16  width B16;
    CARD16  height B16;
    CARD32  widthInMillimeters B32;
    CARD32  heightInMillimeters B32;
    CARD32  dotClock B32;
    CARD16  hSyncStart B16;
    CARD16  hSyncEnd B16;
    CARD16  hTotal B16;
    CARD16  hSkew B16;
    CARD16  vSyncStart B16;
    CARD16  vSyncEnd B16;
    CARD16  vTotal B16;
    CARD16  nameLength B16;
    CARD32  modeFlags B32;
} xRRMonitorMode;
#define sz_xRRMonitorMode   36

typedef struct {
    CARD8   reqType;
    CARD8   randrReqType;
    CARD16  length B16;
    Window  window B32;
    CARD16  monitorIndex B16;
    CARD16  pad B16;
    xRRMonitorMode  mode;
} xRRAddMonitorModeReq;
#define sz_xRRAddMonitorModeReq	48

typedef struct {
    CARD8   reqType;
    CARD8   randrReqType;
    CARD16  length B16;
    Window  window B32;
    CARD16  monitorIndex B16;
    CARD16  nameLength B16;
} xRRDeleteMonitorModeReq;
#define sz_xRRDeleteMonitorModeReq  12

typedef struct {
    CARD8   reqType;
    CARD8	randrReqType;
    CARD16	length B16;
    Window	window B32;
    Time	timestamp B32;
    Time	configTimestamp B32;
    CARD16	monitorIndex B16;
    INT16	x B16;
    INT16	y B16;
    ModeID	mode B16;
    Rotation	rotation B16;
    CARD16	pad B16;
} xRRSetMonitorConfigReq;
#define sz_xRRSetMonitorConfigReq   28

typedef struct {
    BYTE    type;   /* X_Reply */
    CARD8   status;
    CARD16  sequenceNumber B16;
    CARD32  length B32;
    Time    timestamp B32;
    Time    configTimestamp B32;
    Window  root B32;
    SubpixelOrder   subpixelOrder B16;
    CARD16  monitor B16;
    CARD32  pad1 B32;
    CARD32  pad2 B32;
} xRRSetMonitorConfigReply;

#define sz_xRRSetMonitorConfigReply

/*
 * event
 */
typedef struct {
    CARD8 type;				/* always evBase + ScreenChangeNotify */
    CARD8 rotation;			/* new rotation */
    CARD16 sequenceNumber B16;
    Time timestamp B32;			/* time screen was changed */
    Time configTimestamp B32;		/* time config data was changed */
    Window root B32;			/* root window */
    Window window B32;			/* window requesting notification */
    SizeID sizeID B16;			/* new size ID */
    CARD16 subpixelOrder B16;		/* subpixel order */
    CARD16 widthInPixels B16;		/* new size */
    CARD16 heightInPixels B16;
    CARD16 widthInMillimeters B16;
    CARD16 heightInMillimeters B16;
} xRRScreenChangeNotifyEvent;
#define sz_xRRScreenChangeNotifyEvent	32

typedef struct {
    CARD8 type;				/* always evBase +  RRNotify */
    CARD8 subCode;			/* RRNotify_MonitorChange */
    CARD16 sequenceNumber B16;
    Time timestamp B32;			/* time screen was changed */
    Time configTimestamp B32;		/* time config data was changed */
    Window root B32;			/* root window */
    Window window B32;			/* window requesting notification */
    CARD16 monitor B16;			/* monitor index */
    ModeID modeID B16;			/* mode ID */
    Rotation rotation B16;		/* rotation/reflection */
    SubpixelOrder subpixelOrder B16;	/* new subpixel order */
    INT16 x B16;			/* x */
    INT16 y B16;			/* y */
} xRRMonitorChangeNotifyEvent;
#define sz_xRRMonitorChangeNotifyEvent	32

#undef Window
#undef Window
#undef Font
#undef Pixmap
#undef Cursor
#undef Colormap
#undef GContext
#undef Atom
#undef Time
#undef KeyCode
#undef KeySym
#undef Rotation
#undef SizeID
#undef SubpixelOrder

#endif /* _XRANDRP_H_ */
