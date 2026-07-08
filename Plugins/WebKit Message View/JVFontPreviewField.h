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

#import <AppKit/NSTextField.h>

@class NSFont;

@interface JVFontPreviewField : NSTextField {
	NSFont *_actualFont;
	BOOL _showPointSize;
	BOOL _showFontFace;
}
- (void)selectFont:(id)sender;
- (IBAction)chooseFontWithFontPanel:(id)sender;
- (void)setShowPointSize:(BOOL)show;
- (void)setShowFontFace:(BOOL)show;
@end

@interface NSObject (JVFontPreviewFieldDelegate)
- (BOOL)fontPreviewField:(JVFontPreviewField *)field shouldChangeToFont:(NSFont *)font;
- (void)fontPreviewField:(JVFontPreviewField *)field didChangeToFont:(NSFont *)font;
@end
