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

/*!
 * @class AIScaledImageCell
 * @brief An <tt>NSImageCell</tt> subclass which scales its image to fit.
 *
 * An <tt>NSImageCell</tt> subclass which scales its image to fit.  The image will be scaled proportionally if needed, modifying the size in the optimal direction.
 */
@interface AIScaledImageCell : NSImageCell {
	BOOL	isHighlighted;
	
	NSSize	maxSize;
}

/*
 * @brief Set the maximum image size
 *
 * A 0 width or height indicates no maximum. The default is NSZeroSize, no maximum besides the cell bounds.
 */
- (void)setMaxSize:(NSSize)inMaxSize;

@end
