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

#import <libpurple/libpurple.h>

@class AMPurpleJabberNode;

@protocol AMPurpleJabberNodeDelegate <NSObject>
@optional
- (void)jabberNodeGotItems:(AMPurpleJabberNode *)node;
- (void)jabberNodeGotInfo:(AMPurpleJabberNode *)node;
@end

@interface AMPurpleJabberNode : NSObject <NSCopying> {
	PurpleConnection *gc;
	
	NSString *jid;
	NSString *node;
	NSString *name;
	
	NSArray *items;
	NSSet *features;
	NSArray *identities;
	
	AMPurpleJabberNode *commands;
	
	NSMutableArray *delegates;
}

- (id)initWithJID:(NSString*)_jid node:(NSString*)_node name:(NSString*)_name connection:(PurpleConnection*)_gc;

- (void)fetchItems;
- (void)fetchInfo;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *jid;
@property (readonly, copy, nonatomic) NSString *node;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, retain, nonatomic) NSSet *features;
@property (readonly, retain, nonatomic) NSArray *identities;
@property (readonly, nonatomic) NSArray *commands;

- (void)addDelegate:(id<AMPurpleJabberNodeDelegate>)delegate;
- (void)removeDelegate:(id<AMPurpleJabberNodeDelegate>)delegate;

@end

