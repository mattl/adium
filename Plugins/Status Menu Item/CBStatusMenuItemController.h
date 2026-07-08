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

#import <Adium/AIChatControllerProtocol.h>
#import <Adium/AIContactObserverManager.h>
#import "AIMenuBarIcons.h"
#import "AIStatusItemView.h"
#import <Adium/AIStatusMenu.h>
#import <Adium/AIAccountMenu.h>
#import <Adium/AIContactMenu.h>

@protocol AIListObjectObserver;

/*!
 * @class CBStatusMenuItemController
 *
 * @brief Manages the Adium NSStatusItem
 */
@interface CBStatusMenuItemController : NSObject <AIChatObserver, AIListObjectObserver, AIAccountMenuDelegate, AIStatusMenuDelegate, AIContactMenuDelegate, NSMenuDelegate>
{
	NSStatusItem            *statusItem;
	AIStatusItemView		*statusItemView;
	
	NSMenu                  *mainMenu;
	NSMenu					*mainAccountsMenu;
	NSMenu					*mainOptionsMenu;

	NSMenuItem				*contactsMenuItem;
	
	AIContactMenu			*contactMenu;
	AIAccountMenu           *accountMenu;
	AIStatusMenu			*statusMenu;
	AIMenuBarIcons			*menuIcons;

	NSArray                 *accountMenuItemsArray;
	NSArray                 *stateMenuItemsArray;
	NSInteger				currentContactMenuItemsCount;
	NSArray                 *openChatsArray;

	NSTimer					*unviewedContentFlash;
	
	BOOL					showConversationCount;
	
	BOOL					showBadge;
	BOOL					showUnreadCount;
	BOOL					flashUnviewed;
	BOOL					currentlyIgnoringUnviewed;
	BOOL					unviewedContent;
	BOOL					showContactGroups;

	BOOL                    accountsMenuNeedsUpdate;
	BOOL					contactsMenuNeedsUpdate;
	BOOL					optionsMenuNeedsUpdate;
	BOOL					mainMenuNeedsUpdate;
}


+ (CBStatusMenuItemController *)statusMenuItemController;
- (void)invalidateTimers;

@end
