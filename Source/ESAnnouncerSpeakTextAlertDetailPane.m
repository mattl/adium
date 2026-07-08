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

#import "ESAnnouncerSpeakTextAlertDetailPane.h"
#import "ESAnnouncerPlugin.h"
#import <Adium/AILocalizationTextField.h>

/*!
 * @class ESAnnouncerSpeakTextAlertDetailPane
 * @brief Speak Text details pane
 */
@implementation ESAnnouncerSpeakTextAlertDetailPane

/*!
 * @brief Nib name
 */
- (NSString *)nibName{
    return @"AnnouncerSpeakTextContactAlert";    
}

/*!
 * @brief View loaded
 */
- (void)viewDidLoad
{
	[super viewDidLoad];
	
	[textView_textToSpeakLabel setLocalizedString:AILocalizedString(@"Text To Speak:",nil)];
	[box_substitutions setTitle:AILocalizedString(@"Substitutions:","Title above the box in the Speak Text action's detail pane. The box contains keywords such as \%a and what they will become when spoken such as User Alias.")];

	[textView_substitutions setStringValue:
		[NSString stringWithFormat:@"%@ - %@\n%@ - %@\n%@ - %@\n%@ - %@",
			@"%n", AILocalizedString(@"User name", "Speak Text action keyword: user name"),
			@"%a", AILocalizedString(@"User alias", "Speak Text action keyword: user alias"),
			@"%m", AILocalizedString(@"Message", "Speak Text action keyword: message"),
			@"%t", AILocalizedString(@"Time", "Speak Text action keyword: time")]];
}

/*!
 * @brief Configure for the action
 */
- (void)configureForActionDetails:(NSDictionary *)inDetails listObject:(AIListObject *)inObject
{
	NSString *textToSpeak = [inDetails objectForKey:KEY_ANNOUNCER_TEXT_TO_SPEAK];
	[textView_textToSpeak setString:(textToSpeak ? textToSpeak : @"")];

	[super configureForActionDetails:inDetails listObject:inObject];
}

/*!
 * @brief Return our current configuration
 */
- (NSDictionary *)actionDetails
{
	NSString			*textToSpeak;
	NSMutableDictionary	*actionDetails = [NSMutableDictionary dictionary];
	
	textToSpeak  = [[[textView_textToSpeak string] copy] autorelease];
	
	if (textToSpeak) {
		[actionDetails setObject:textToSpeak
						  forKey:KEY_ANNOUNCER_TEXT_TO_SPEAK];
	}

	return [self actionDetailsFromDict:actionDetails];
}
	
/*!
 * @brief Key on which to store our defaults
 */
- (NSString *)defaultDetailsKey
{
	return @"DefaultSpeakTextDetails";
}

@end
