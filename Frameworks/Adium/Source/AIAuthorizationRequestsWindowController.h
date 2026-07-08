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

#import <Adium/AIWindowController.h>

#define AUTHORIZATION_REQUESTS		AILocalizedString(@"Authorization Requests", nil)
#define GET_INFO					AILocalizedString(@"Get Info", nil)
#define AUTHORIZE					AILocalizedString(@"Authorize", nil)
#define AUTHORIZE_ADD				AILocalizedString(@"Authorize and Add", nil)
#define DENY						AILocalizedString(@"Deny", nil)
#define DENY_BLOCK					AILocalizedString(@"Deny and Block", nil)
#define IGNORE						AILocalizedString(@"Ignore", nil)
#define IGNORE_BLOCK				AILocalizedString(@"Ignore and Block", nil)

@class AIAccount;

@interface AIAuthorizationRequestsWindowController : AIWindowController <NSToolbarDelegate,NSTableViewDelegate,NSTableViewDataSource> {
	IBOutlet		NSTableView		*tableView;
	
	NSMutableArray					*requests;
	
	NSMutableDictionary				*toolbarItems;
	NSMutableDictionary				*requiredHeightDict;
}

+ (AIAuthorizationRequestsWindowController *)sharedController;

- (void)addRequestWithDict:(NSDictionary *)dict;
- (void)removeRequest:(id)request;

@end
