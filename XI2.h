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

#ifndef _XI2_H_
#define _XI2_H_

#define XI_2_Major				2
#define XI_2_Minor				0


/* DeviceChangedEvent change reasons */
#define SlaveSwitch                     1
#define DeviceChange                    2

/* Hierarchy flags */
#define HF_MasterAdded              (1 << 0)
#define HF_MasterRemoved            (1 << 1)
#define HF_SlaveAdded               (1 << 2)
#define HF_SlaveRemoved             (1 << 3)
#define HF_SlaveAttached            (1 << 4)
#define HF_SlaveDetached            (1 << 5)
#define HF_DeviceEnabled            (1 << 6)
#define HF_DeviceDisabled           (1 << 7)

/* ChangeHierarchy constants */
#define CH_CreateMasterDevice    1
#define CH_RemoveMasterDevice    2
#define CH_AttachSlave           3
#define CH_DetachSlave           4

#define AttachToMaster           1
#define Floating                 2

/* Valuator modes */
#define ModeRelative                    0
#define ModeAbsolute                    1

/* Device types */
#define MasterPointer                   1
#define MasterKeyboard                  2
#define SlavePointer                    3
#define SlaveKeyboard                   4
#define FloatingSlave                   5

/* Device classes */
/* These may be defined if XI.h is included first */
#ifndef KeyClass
#define KeyClass                        0
#endif
#ifndef ButtonClass
#define ButtonClass                     1
#endif
#ifndef ValuatorClass
#define ValuatorClass                   2
#endif

/* XI2 mask macro */
#define XIMASK(event)   (1 << (event))

#define AllDevices                      0
#define AllMasterDevices                1

/* Event types */
#define XI_DeviceChanged                 1
#define XI_KeyPress                      2
#define XI_KeyRelease                    3
#define XI_ButtonPress                   4
#define XI_ButtonRelease                 5
#define XI_Motion                        6
#define XI_Enter                         7
#define XI_Leave                         8
#define XI_FocusIn                       9
#define XI_FocusOut                      10
#define XI_HierarchyChanged              11
#define XI_RawEvent                      12
#define XI_LASTEVENT                     XI_RawEvent

/* Event masks.
 * Note: the protocol spec defines a mask to be of (1 << type). Clients are
 * free to create masks by bitshifting instead of using these defines.
 */
#define XI_DeviceChangedMask             (1 << XI_DeviceChanged)
#define XI_KeyPressMask                  (1 << XI_KeyPress)
#define XI_KeyReleaseMask                (1 << XI_KeyRelease)
#define XI_ButtonPressMask               (1 << XI_ButtonPress)
#define XI_ButtonReleaseMask             (1 << XI_ButtonRelease)
#define XI_MotionMask                    (1 << XI_Motion)
#define XI_EnterMask                     (1 << XI_Enter)
#define XI_LeaveMask                     (1 << XI_Leave)
#define XI_FocusInMask                   (1 << XI_FocusIn)
#define XI_FocusOutMask                  (1 << XI_FocusOut)
#define XI_HierarchyChangedMask          (1 << XI_HierarchyChanged)
#define XI_RawEventMask                  (1 << XI_RawEvent)

#endif /* _XI2_H_ */
