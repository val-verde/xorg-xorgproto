/*
 * $Id: composite.h,v 1.1 2003-10-30 04:31:19 keithp Exp $
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

#ifndef _APPORTION_H_
#define _APPORTION_H_

#include <X11/extensions/xfixeswire.h>

#define APPORTION_NAME				"Apportion"
#define APPORTION_MAJOR				0
#define APPORTION_MINOR				1

#define ApportionRedirectAutomatic		0
#define ApportionRedirectManual			1

#define X_ApportionQueryVersion			0
#define X_ApportionRedirectWindow		1
#define X_ApportionRedirectSubwindows		2
#define X_ApportionUnredirectWindow		3
#define X_ApportionUnredirectSubwindows		4
#define X_ApportionCreateRegionFromBorderClip	5

#endif /* _APPORTION_H_ */
