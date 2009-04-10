/*
 * Copyright © 2009 Red Hat, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */

/**
 * @file XI2proto.h
 * Protocol definitions for the XI2 protocol.
 *
 * This file should not be included by clients that merely use XI2, but do not
 * need the wire protocol. Such clients should include XI2.h, or the matching
 * header from the library.
 *
 */
#ifndef _XI2PROTO_H_
#define _XI2PROTO_H_

#include <X11/Xproto.h>
#include <X11/X.h>
#include <X11/extensions/XI2.h>

/* make sure types have right sizes for protocol structures. */
#define Window  CARD32
#define Time    CARD32
#define KeyCode CARD8
#define Mask    CARD32
#define Atom    CARD32

/* Request opcodes */
#define X_XIQueryDevicePointer          40
#define X_XIWarpDevicePointer           41
#define X_XIChangeDeviceCursor          42
#define X_XIChangeDeviceHierarchy       43
#define X_XISetClientPointer            44
#define X_XIGetClientPointer            45
#define X_XISelectEvents                46
#define X_XIQueryVersion                47
#define X_XIQueryDevice                 48
#define X_XISetDeviceFocus              49
#define X_XIGetDeviceFocus              50

#define XI2REQUESTS (X_XIGetDeviceFocus - X_XIQueryDevicePointer + 1)
#define XI2EVENTS   (XI_LASTEVENT + 1)

/*************************************************************************************
 *                                                                                   *
 *                               COMMON STRUCTS                                      *
 *                                                                                   *
 *************************************************************************************/
/* Fixed point 16.16 */
typedef struct
{
    int16_t     integral;
    uint16_t    frac;
} FP1616;

/* Fixed point 32.32 */
typedef struct {
    int32_t     integral;
    uint32_t    frac;
} FP3232;

/**
 * Struct to describe a device.
 *
 * For a MasterPointer or a MasterKeyboard, 'attachment' desviced
 *
 * @see XIQueryDevices
 */
typedef struct {
    uint16_t    deviceid;
    uint16_t    use;            /**< ::MasterPointer, ::MasterKeyboard,
                                  ::SlavePointer, ::SlaveKeyboard,
                                  ::FloatingSlave */
    uint16_t    attachment;     /**< Current attachment or pairing.*/
    uint16_t    num_classes;    /**< Number of classes following this struct. */
    uint16_t    name_len;       /**< Length of name in bytes. */
    uint8_t     enabled;        /**< TRUE if device is enabled. */
    uint8_t     pad;
} xXIDeviceInfo;

/**
 * Default template for a device class.
 * A device class is equivalent to a device's capabilities. Multiple classes
 * are supported per device.
 *
 * @see XIQueryDevices
 * @see XIDeviceChangedEvent
 */
typedef struct {
    uint16_t    type;           /**< One of *class */
    uint16_t    length;         /**< Length in 4 byte units */
} xXIAnyInfo;

/**
 * Denotes button capability on a device.
 * Struct is followed by num_buttons * Atom that names the buttons in the
 * device-native setup (i.e. ignoring button mappings).
 *
 * @see XIQueryDevices
 * @see XIDeviceChangedEvent
 */
typedef struct {
    uint16_t    type;           /**< Always ButtonClass */
    uint16_t    length;         /**< Length in 4 byte units */
    uint16_t    num_buttons;    /**< Number of buttons provide */
    uint16_t    pad;
} xXIButtonInfo;

/**
 * Denotes key capability on a device.
 * Struct is followed by num_keys * CARD32 that lists the keycodes available
 * on the device.
 *
 * @see XIQueryDevices
 * @see XIDeviceChangedEvent
 */
typedef struct {
    uint16_t    type;           /**< Always KeyClass */
    uint16_t    length;         /**< Length in 4 byte units */
    uint16_t    num_keycodes;   /**< Number of keys provided */
    uint16_t    pad;
} xXIKeyInfo;

/**
 * Denotes an valuator capability on a device.
 * One XIValuatorInfo describes exactly one valuator (axis) on the device.
 *
 * @see XIQueryDevices
 * @see XIDeviceChangedEvent
 */
typedef struct {
    uint16_t    type;           /**< Always ValuatorClass       */
    uint16_t    length;         /**< Length in 4 byte units     */
    Atom        name;           /**< Valuator name              */
    FP3232      min;            /**< Min value                  */
    FP3232      max;            /**< Max value                  */
    uint32_t    resolution;     /**< Resolutions in units/m     */
    uint16_t    number;         /**< Valuator number            */
    uint8_t     mode;           /**< ModeRelative or ModeAbsolute */
    uint8_t     pad;
} xXIValuatorInfo;


/**
 * Used to select for events on a given window.
 * Struct is followed by (mask_len * CARD8), with each bit set representing
 * the event mask for the given type. A mask bit represents an event type if
 * (mask == (1 << type)).
 *
 * @see XISelectEvents
 */
typedef struct {
    uint16_t    deviceid;       /**< Device id to select for        */
    uint16_t    mask_len;       /**< Length of mask in 4 byte units */
} xXIDeviceEventMask;

/*************************************************************************************
 *                                                                                   *
 *                                   REQUESTS                                        *
 *                                                                                   *
 *************************************************************************************/

/**********************************************************
 * XIQueryVersion.
 * Query the server for the supported X Input Extension version.
 *
 */

typedef struct {
    uint8_t     reqType;                /* input extension major code   */
    uint8_t     ReqType;                /* always X_XIQueryVersion      */
    uint16_t    length;
    uint16_t    major_version;
    uint16_t    minor_version;
} xXIQueryVersionReq;
#define sz_xXIQueryVersionReq                     8

typedef struct {
    uint8_t     repType;                /* X_Reply */
    uint8_t     RepType;                /* always X_XIQueryVersion      */
    uint16_t    sequenceNumber;
    uint32_t    length;
    uint16_t    major_version;
    uint16_t    minor_version;
    uint32_t    pad1;
    uint32_t    pad2;
    uint32_t    pad3;
    uint32_t    pad4;
    uint32_t    pad5;
} xXIQueryVersionReply;
#define sz_xXIQueryVersionReply             32

/**********************************************************
 *
 * XIQueryDevice
 * Query the server for information about a specific device or all input
 * devices.
 *
 */

typedef struct {
    uint8_t     reqType;                /* input extension major code   */
    uint8_t     ReqType;                /* always X_XIQueryDevice       */
    uint16_t    length;
    uint16_t    deviceid;
    uint16_t    pad;
} xXIQueryDeviceReq;
#define sz_xXIQueryDeviceReq                    8

typedef struct {
    uint8_t     repType;                /* X_Reply */
    uint8_t     RepType;                /* always X_XIQueryDevice       */
    uint16_t    sequenceNumber;
    uint32_t    length;
    uint16_t    num_devices;
    uint16_t    pad0;
    uint32_t    pad1;
    uint32_t    pad2;
    uint32_t    pad3;
    uint32_t    pad4;
    uint32_t    pad5;
} xXIQueryDeviceReply;
#define sz_xXIQueryDeviceReply                  32

/**********************************************************
 *
 * XISelectEvents
 *
 */
typedef struct {
    uint8_t     reqType;                /* input extension major code   */
    uint8_t     ReqType;                /* always X_XISelectEvents      */
    uint16_t    length;
    Window      window;
    uint16_t    num_masks;
    uint16_t    pad;
} xXISelectEventsReq;
#define sz_xXISelectEventsReq                  12


/**********************************************************
 *
 * QueryDevicePointer.
 *
 */

typedef struct {
    uint8_t     reqType;                /* input extension major code   */
    uint8_t     ReqType;                /* always X_QueryDevicePointer  */
    uint16_t    length;
    Window      win;
    uint16_t    deviceid;
    uint16_t    pad1;
} xXIQueryDevicePointerReq;
#define sz_xXIQueryDevicePointerReq               12


typedef struct {
    uint8_t     repType;                /* X_Reply */
    uint8_t     RepType;                /* always X_QueryDevicePointer */
    uint16_t    sequenceNumber;
    uint32_t    length;
    Window      root;
    Window      child;
    FP1616      root_x;
    FP1616      root_y;
    FP1616      win_x;
    FP1616      win_y;
    uint16_t    mask;
    uint16_t    deviceid;
    uint8_t     same_screen;
    uint8_t     pad0;
    uint16_t    pad1;
} xXIQueryDevicePointerReply;
#define sz_xXIQueryDevicePointerReply             40

/**********************************************************
 *
 * WarpDevicePointer.
 *
 */

typedef struct {
    uint8_t     reqType;        /* input extension major code   */
    uint8_t     ReqType;        /* always X_WarpDevicePointer   */
    uint16_t    length;
    Window      src_win;
    Window      dst_win;
    INT16       src_x;
    INT16       src_y;
    uint16_t    src_width;
    uint16_t    src_height;
    INT16       dst_x;
    INT16       dst_y;
    uint16_t    deviceid;
    uint16_t    pad1;
} xXIWarpDevicePointerReq;
#define sz_xXIWarpDevicePointerReq                28

/**********************************************************
 *
 * ChangeDeviceCursor.
 *
 */

typedef struct {
    uint8_t     reqType;          /* input extension major code   */
    uint8_t     ReqType;          /* always X_ChangeDeviceCursor  */
    uint16_t    length;
    Window      win;
    Cursor      cursor;
    uint16_t    deviceid;
    uint16_t    pad1;
} xXIChangeDeviceCursorReq;
#define sz_xXIChangeDeviceCursorReq               16

/**********************************************************
 *
 * ChangeDeviceHierarchy
 *
 */

typedef struct {
    uint8_t     reqType;         /* input extension major code   */
    uint8_t     ReqType;         /* always X_ChangeDeviceHierarchy */
    uint16_t    length;
    uint8_t     num_changes;
    uint8_t     pad0;
    uint16_t    pad1;
} xXIChangeDeviceHierarchyReq;
#define sz_xXIChangeDeviceHierarchyReq            8

typedef struct {
    uint16_t    type;
    uint16_t    length;         /* in 4 byte units */
} xXIAnyHierarchyChangeInfo;

/**
 * Create a new master device.
 * Name of new master follows struct (4-byte padded)
 */
typedef struct {
    uint16_t    type;           /* Always CH_CreateMasterDevice */
    uint16_t    length;         /* 2 + (namelen + padding)/4 */
    uint16_t    name_len;
    uint8_t     send_core;
    uint8_t     enable;
} xXICreateMasterInfo;

/**
 * Delete a master device. Will automatically delete the master device paired
 * with the given master device.
 */
typedef struct {
    uint16_t    type;            /* Always CH_RemoveMasterDevice */
    uint16_t    length;          /* 3 */
    uint16_t    deviceid;
    uint8_t     return_mode;     /* AttachToMaster, Floating */
    uint8_t     pad;
    uint16_t    return_pointer;  /* Pointer to attach slave ptr devices to */
    uint16_t    return_keyboard; /* keyboard to attach slave keybd devices to*/
} xXIRemoveMasterInfo;

/* Attach an SD to a new device.
 * NewMaster has to be of same type (pointer->pointer, keyboard->keyboard);
 */
typedef struct {
    uint16_t    type;           /* Always CH_AttachSlave */
    uint16_t    length;         /* 2 */
    uint16_t    deviceid;
    uint16_t    new_master;     /* id of new master device */
} xXIAttachSlaveInfo;

/* Detach an SD from its current master device.
 */
typedef struct {
    uint16_t    type;           /* Always CH_DetachSlave */
    uint16_t    length;         /* 2 */
    uint16_t    deviceid;
    uint16_t    pad;
} xXIDetachSlaveInfo;


/**********************************************************
 *
 * SetClientPointer.
 *
 */

typedef struct {
    uint8_t     reqType;
    uint8_t     ReqType;                /* Always X_SetClientPointer */
    uint16_t    length;
    Window      win;
    uint16_t    deviceid;
    uint16_t    pad1;
} xXISetClientPointerReq;
#define sz_xXISetClientPointerReq                 12

/**********************************************************
 *
 * GetClientPointer.
 *
 */
typedef struct {
    uint8_t     reqType;
    uint8_t     ReqType;                /* Always X_GetClientPointer */
    uint16_t    length;
    Window      win;
} xXIGetClientPointerReq;
#define sz_xXIGetClientPointerReq                 8

typedef struct {
    uint8_t     repType;                /* input extension major opcode */
    uint8_t     RepType;                /* Always X_GetClientPointer */
    uint16_t    sequenceNumber;
    uint32_t    length;
    BOOL        set;                    /* client pointer is set */
    uint8_t     pad0;
    uint16_t    deviceid;
    uint32_t    pad1;
    uint32_t    pad2;
    uint32_t    pad3;
    uint32_t    pad4;
    uint32_t    pad5;
} xXIGetClientPointerReply;
#define sz_xXIGetClientPointerReply               32

/**********************************************************
 *
 * SetDeviceFocus.
 *
 */
typedef struct {
    uint8_t     reqType;
    uint8_t     ReqType;                /* Always X_XISetDeviceFocus */
    uint16_t    length;
    Window      focus;
    Time        time;
    uint16_t    deviceid;
    uint16_t    pad0;
} xXISetDeviceFocusReq;
#define sz_xXISetDeviceFocusReq                 16

/**********************************************************
 *
 * GetDeviceFocus.
 *
 */
typedef struct {
    uint8_t     reqType;
    uint8_t     ReqType;                /* Always X_XIGetDeviceFocus */
    uint16_t    length;
    uint16_t    deviceid;
    uint16_t    pad0;
} xXIGetDeviceFocusReq;
#define sz_xXIGetDeviceFocusReq                 8

typedef struct {
    uint8_t     repType;                /* input extension major opcode */
    uint8_t     RepType;                /* Always X_XIGetDeviceFocus */
    uint16_t    sequenceNumber;
    uint32_t    length;
    Window      focus;
    uint32_t    pad1;
    uint32_t    pad2;
    uint32_t    pad3;
    uint32_t    pad4;
    uint32_t    pad5;
} xXIGetDeviceFocusReply;
#define sz_xXIGetDeviceFocusReply               32

/*************************************************************************************
 *                                                                                   *
 *                                      EVENTS                                       *
 *                                                                                   *
 *************************************************************************************/

typedef struct
{
    uint8_t     type;
    uint8_t     extension;              /* XI extension offset */
    uint16_t    sequenceNumber;
    uint32_t    length;
    uint16_t    evtype;
    uint16_t    deviceid;
    uint32_t    time;
} xXIGenericDeviceEvent;

/***********************************************************
 *  DeviceHierarchyEvent
 *
 */
typedef struct
{
    uint16_t    deviceid;
    uint16_t    attachment;
    uint8_t     use;
    BOOL        enabled;
    uint16_t    pad;
} xXIHierarchyInfo;

typedef struct
{
    uint8_t     type;                   /* always GenericEvent */
    uint8_t     extension;              /* XI extension offset */
    uint16_t    sequenceNumber;
    uint32_t    length;
    uint16_t    evtype;                 /* XI_Hierarchy */
    uint16_t    deviceid;
    uint32_t    time;
    uint32_t    flags;                  /* MasterAdded, MasterDeleted,
                                           SlaveAttached, SlaveDetached,
                                           SlaveAdded, SlaveRemoved,
                                           DeviceEnabled, DeviceDisabled */
    uint16_t    num_devices;
    uint16_t    pad0;
    uint32_t    pad1;
    uint32_t    pad2;
} xXIDeviceHierarchyEvent;

/***********************************************************
 *  DeviceChangedEvent
 *
 */

typedef struct
{
    uint8_t     type;                /* always GenericEvent */
    uint8_t     extension;           /* XI extension offset */
    uint16_t    sequenceNumber;
    uint32_t    length;
    uint16_t    evtype;              /* XI_DeviceChanged */
    uint16_t    deviceid;            /* id of master */
    uint32_t    time;
    uint16_t    num_classes;         /* classes that have changed */
    uint16_t    sourceid;            /* Source for the new classes*/
    uint8_t     reason;              /* SlaveSwitch, DeviceChange */
    uint8_t     pad0;
    uint16_t    pad1;
    uint32_t    pad2;
    uint32_t    pad3;
} xXIDeviceChangedEvent;

/***********************************************************
 *  DeviceEvent
 *
 */

typedef struct
{
    uint32_t    base_mods;
    uint32_t    latched_mods;
    uint32_t    locked_mods;
} xXIModifierInfo;

typedef struct
{
    uint8_t     base_group;
    uint8_t     latched_group;
    uint8_t     locked_group;
    uint8_t     pad0;
} xXIGroupInfo;

typedef struct
{
    uint8_t     type;                   /* always GenericEvent */
    uint8_t     extension;              /* XI extension offset */
    uint16_t    sequenceNumber;
    uint32_t    length;
    uint16_t    evtype;
    uint16_t    deviceid;
    Time        time;
    uint32_t    detail;                 /* keycode or button */
    Window      root;
    Window      event;
    Window      child;
/* └──────── 32 byte boundary ────────┘ */
    FP1616      root_x;                 /* always screen coords, 16.16 fixed point */
    FP1616      root_y;
    FP1616      event_x;                /* always screen coords, 16.16 fixed point */
    FP1616      event_y;
    uint16_t    buttons_len;            /* len of button flags in 4 b units */
    uint16_t    valuators_len;          /* len of val. flags in 4 b units */
    uint16_t    sourceid;               /* the source device */
    uint16_t    pad0;
    xXIModifierInfo     mods;
    xXIGroupInfo        group;
} xXIDeviceEvent;



/***********************************************************
 *  RawEvent
 *
 */

typedef struct
{
    uint8_t     type;                   /* always GenericEvent */
    uint8_t     extension;              /* XI extension offset */
    uint16_t    sequenceNumber;
    uint32_t    length;
    uint16_t    evtype;                 /* XI_RawEvent */
    uint16_t    deviceid;
    Time        time;
    uint32_t    detail;
    uint16_t    eventtype;              /* XI_Motion, XI_ButtonPress,
                                           XI_ButtonRelease, XI_KeyPress,
                                           XI_KeyRelease */
    uint16_t    valuators_len;
    uint32_t    pad1;
    uint32_t    pad2;
} xXIRawDeviceEvent;

/***********************************************************
 *  Enter/LeaveEvents
 *
 *  Note that the layout of root, event, child, root_x, root_y, event_x,
 *  event_y must be identical to the xXIDeviceEvent.
 *
 */

typedef struct
{
    uint8_t     type;                   /* always GenericEvent */
    uint8_t     extension;              /* XI extension offset */
    uint16_t    sequenceNumber;
    uint32_t    length;
    uint16_t    evtype;                 /* XI_Enter */
    uint16_t    deviceid;
    Time        time;
    uint16_t    sourceid;
    uint8_t     mode;
    uint8_t     detail;
    Window      root;
    Window      event;
    Window      child;
/* └──────── 32 byte boundary ────────┘ */
    FP1616      root_x;
    FP1616      root_y;
    FP1616      event_x;
    FP1616      event_y;
    BOOL        same_screen;
    BOOL        focus;
    uint16_t    buttons_len;
    xXIModifierInfo     mods;
    xXIGroupInfo        group;
} xXIEnterEvent;

typedef xXIEnterEvent xXILeaveEvent;
typedef xXIEnterEvent xXIFocusInEvent;
typedef xXIEnterEvent xXIFocusOutEvent;


#undef Window
#undef Time
#undef KeyCode
#undef Mask
#undef Atom

#endif /* _XI2PROTO_H_ */
