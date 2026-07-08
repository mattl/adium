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

#import <Adium/AIContactControllerProtocol.h>
#import "AIContactObserverManager.h"

@class AISortController, AIContactHidingController, AIContactObserverManager;

@interface AIContactController : NSObject <AIContactController, AIListObjectObserver> {
@private
	//Contacts and metaContacts
	NSMutableDictionary		*contactDict;
	NSMutableDictionary		*metaContactDict;
	NSMutableDictionary		*contactToMetaContactLookupDict;
	NSMutableDictionary		*bookmarkDict;
	
	//Contact List and Groups
	AIContactList			*contactList;
	NSMutableDictionary		*groupDict;
	BOOL					useContactListGroups;
	NSMenuItem				*menuItem_showGroups;
	BOOL					useOfflineGroup;
	
	//Detached Contact Lists
	NSMutableArray			*contactLists;
	
	//Authorization	
	AIContactObserverManager *contactPropertiesObserverManager;
}

- (void)sortContactLists:(NSArray *)lists;
- (void)loadContactList;

@end

@interface AIContactController (ContactControllerHelperAccess)
- (NSEnumerator *)contactEnumerator;
- (NSEnumerator *)groupEnumerator;
- (NSEnumerator *)bookmarkEnumerator;
@end

@interface NSObject (AIContactControllerInspector)
- (void)selectGroup:(id)sender;
@end
