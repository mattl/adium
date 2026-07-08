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


@class AIChat, AIAccount, AIMetaContact, AIListContact, AIService;

@interface DCJoinChatViewController : NSObject {
	IBOutlet		NSView			*view;			// Custom view
	AIChat							*chat;			// The newly created chat
	AIAccount						*account;		// The account we're being configured for

	id								delegate;		// Our delegate
	id								sharedChatInstance;
}

+ (DCJoinChatViewController *)joinChatView;

- (id)init;
@property (readonly, nonatomic) NSView *view;
@property (readonly, nonatomic) NSString *nibName;

- (void)configureForAccount:(AIAccount *)inAccount;
- (void)joinChatWithAccount:(AIAccount *)inAccount;

- (NSString *)impliedCompletion:(NSString *)aString;
- (AIListContact *)validContact:(NSString *)uniqueID withService:(AIService *)service;
- (NSDragOperation)doDraggingEntered:(id <NSDraggingInfo>)sender;
- (BOOL)doPerformDragOperation:(id <NSDraggingInfo>)sender toField:(NSTextField *)theField;

- (void)doJoinChatWithName:(NSString *)inName
				 onAccount:(AIAccount *)inAccount
		  chatCreationInfo:(NSDictionary *)inInfo 
		  invitingContacts:(NSArray *)contactsToInvite
	 withInvitationMessage:(NSString *)invitationMessage;
- (NSArray *)contactsFromNamesSeparatedByCommas:(NSString *)namesSeparatedByCommas onAccount:(AIAccount *)inAccount;

@property (readwrite, nonatomic, assign) id delegate;

//roomlistWindowController delegate
@property (readwrite, nonatomic, assign) id sharedChatInstance;

@end


