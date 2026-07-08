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

#import <Adium/AIContentMessage.h>

#define CONTENT_TOPIC_TYPE		@"Topic"		//Type ID for this content


#define CONTENT_TOPIC_MESSAGE_ACTUALLY_EMPTY [NSAttributedString stringWithString:@"This Topic Intentionally Left Blank"]

@interface AIContentTopic : AIContentMessage {
	BOOL actuallyBlank;
}

+ (id)topicInChat:(AIChat *)inChat
	   withSource:(id)inSource
	  destination:(id)inDest
			 date:(NSDate *)inDate 
		  message:(NSAttributedString *)inMessage;

@property (nonatomic) BOOL actuallyBlank;

@end
