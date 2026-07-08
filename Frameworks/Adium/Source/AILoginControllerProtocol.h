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

#import <Adium/AIControllerProtocol.h>

#define LOGIN_PREFERENCES_FILE_NAME @"Login Preferences"	//Login preferences file name
#define LOGIN_SHOW_WINDOW 			@"Show Login Window"	//Should hide the login window 

#define LOGIN_LAST_USER				@"Last Login Name"		//Last logged in user
#if defined (DEBUG_BUILD) && ! defined (RELEASE_BUILD)
#	define LOGIN_LAST_USER_DEBUG	@"Last Login Name-Debug"//Last logged in user - debug
#endif

@protocol AILoginController <AIController>
@property (nonatomic, readonly) NSString *userDirectory;
@property (nonatomic, readonly) NSString *currentUser;
@property (nonatomic, readonly) NSArray *userArray;

- (void)addUser:(NSString *)inUserName;
- (void)deleteUser:(NSString *)inUserName;
- (void)renameUser:(NSString *)oldName to:(NSString *)newName;
- (void)loginAsUser:(NSString *)userName;
- (void)requestUserNotifyingTarget:(id)inTarget selector:(SEL)inSelector;
@end

