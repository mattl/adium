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

#import "ESPurpleRequestAbstractWindowController.h"
#import <AdiumLibpurple/PurpleCommon.h>
#import <WebKit/WebKit.h>

@class CBPurpleAccount;

@interface AMPurpleRequestFieldsController : ESPurpleRequestAbstractWindowController {
    GCallback			okcb;
    GCallback			cancelcb;
    void				*userData;
    PurpleRequestFields *fields;
    NSMutableDictionary *fieldobjects;
    BOOL				wasSubmitted;
    
    IBOutlet WebView	*webview;
}

- (id)initWithTitle:(NSString *)title
        primaryText:(NSString *)primary
      secondaryText:(NSString *)secondary
      requestFields:(PurpleRequestFields *)_fields
             okText:(NSString *)okText
           callback:(GCallback)_okcb
         cancelText:(NSString *)cancelText
           callback:(GCallback)_cancelcb
            account:(CBPurpleAccount *)account
                who:(NSString *)who
       conversation:(PurpleConversation *)conv
           userData:(void *)_userData;

@end
