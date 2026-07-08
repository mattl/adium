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

#import <AdiumLibpurple/SLPurpleCocoaAdapter.h>
#import <Adium/AIPasswordPromptController.h>

PurpleRequestUiOps *adium_purple_request_get_ui_ops();

@protocol PurpleRequestController
- (void)purpleRequestClose;
- (void)mainPerformSelector:(SEL)aSelector;//this is declared in AIObjectAdditions.h, but for some reason it wasn't being noticed, so this fixes a warning.
@end;

@interface ESPurpleRequestAdapter : NSObject {
	
}
+ (void)requestCloseWithHandle:(id)handle;
+ (void)returnedPassword:(NSString *)password returnCode:(AIPasswordPromptReturn)returnCode context:(id)context;
@end
