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

@interface NSMenu (ItemCreationAdditions)

- (NSMenuItem *)addItemWithTitle:(NSString *)aString target:(id)target action:(SEL)aSelector keyEquivalent:(NSString *)charCode;
- (NSMenuItem *)addItemWithTitle:(NSString *)aString target:(id)target action:(SEL)aSelector keyEquivalent:(NSString *)charCode tag:(NSInteger)tag;
- (NSMenuItem *)addItemWithTitle:(NSString *)aString target:(id)target action:(SEL)aSelector keyEquivalent:(NSString *)charCode representedObject:(id)object;
- (void)removeAllItemsButFirst;
- (void)removeAllItemsAfterIndex:(NSInteger)idx;

@end

@interface NSMenu (AIMenuAdditions)

- (void)setAllMenuItemsToState:(int)state;

//Swap two menu items
+ (void)swapMenuItem:(NSMenuItem *)itemA with:(NSMenuItem *)itemB;

//Recollapse an alternate menu item
+ (void)updateAlternateMenuItem:(NSMenuItem *)alternateItem;

//Find the first enabled menu item
- (NSMenuItem *)firstEnabledMenuItem;

@end

@interface NSMenuItem (ItemCreationAdditions)

- (id)initWithTitle:(NSString *)aString target:(id)target action:(SEL)aSelector keyEquivalent:(NSString *)charCode;
- (id)initWithTitle:(NSString *)aString target:(id)target action:(SEL)aSelector keyEquivalent:(NSString *)charCode representedObject:(id)object;
- (id)initWithTitle:(NSString *)aString target:(id)target action:(SEL)aSelector keyEquivalent:(NSString *)charCode keyMask:(unsigned int)keyMask;
- (void)removeKeyEquivalent;
- (NSComparisonResult)titleCompare:(NSMenuItem *)inMenuItem;
@end
