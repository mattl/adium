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

#import "CBPurpleAccount.h"

#define KEY_SIMPLE_PUBLISH_STATUS	@"Simple:Publish Status"
#define KEY_SIMPLE_USE_UDP			@"Simple:Use UDP"

#define KEY_SIMPLE_USE_SIP_PROXY	@"Simple:Use SIP Proxy"
#define KEY_SIMPLE_SIP_PROXY		@"Simple:SIP Proxy"
#define KEY_SIMPLE_AUTH_USER		@"Simple:Auth User"
#define KEY_SIMPLE_AUTH_DOMAIN		@"Simple:Auth Domain"

@interface ESPurpleSimpleAccount : CBPurpleAccount {

}

@end
