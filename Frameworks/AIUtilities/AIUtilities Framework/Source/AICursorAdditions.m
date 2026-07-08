/* 
 * Adium is the legal property of its developers, whose names are listed in the copyright file included
 * with this source distribution.

* Attempt to update it to modern macOS under GPLv3 or later by Matt Lee (mattl@gnu.org)
 * 
 * This program is free software; you can redistribute it and/or modify it under the terms of the GNU
 * General Public License as published by the Free Software Foundation; either version 3 of the License,
 * or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
 * the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General
 * Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along with this program; if not,
 * write to the Free Software Foundation, Inc., 31 Milk Street, # 960789
Boston, MA 02196
USA or email: info@fsf.org


 */

#import "AICursorAdditions.h"

@implementation NSCursor (AICursorAdditions)

/*
arrowCursor            default
closedHandCursor       @url
crosshairCursor        crosshair 
disappearingItemCursor @url
IBeamCursor            text
openHandCursor         move
pointingHandCursor     pointer
resizeDownCursor       n-resize
resizeLeftCursor       e-resize
resizeLeftRightCursor  @url
resizeRightCursor      w-resize
resizeUpCursor         s-resize
resizeUpDownCursor     @url

@url = Write to cache folder, get file: URL and return @url for it.
 */
- (NSString *) CSSRepresentation
{
	if (self == [NSCursor arrowCursor]) {
		return @"default";
	} else if(self == [NSCursor crosshairCursor]) {
		return @"crosshair";
	} else if(self == [NSCursor IBeamCursor]) {
		return @"text";
	} else if(self == [NSCursor openHandCursor]) {
		return @"move";
	} else if(self == [NSCursor pointingHandCursor]) {
		return @"pointer";
	} else if(self == [NSCursor resizeDownCursor]) {
		return @"n-resize";
	} else if(self == [NSCursor resizeLeftCursor]) {
		return @"e-resize";
	} else if(self == [NSCursor resizeRightCursor]) {
		return @"w-resize";
	} else if(self == [NSCursor resizeUpCursor]) {
		return @"s-resize";
	} else {
		//XXX
		return nil;
	}
}

@end
