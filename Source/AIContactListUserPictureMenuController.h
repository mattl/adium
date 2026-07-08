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


#import <AIUtilities/AIImageCollectionView.h>


@class AIImageCollectionView, AIImageCollectionViewDelegate, AIContactListImagePicker;

/*!
 * @class AIContactListUserPictureMenuController
 * @brief Handles fast User Picture switching
 *
 * Opens a contextual (pop-up) menu, allowing to switch user picture.
 * Supports changing for individual accounts, image editing and caputring from a camera.
 */
@interface AIContactListUserPictureMenuController : NSObject <AIImageCollectionViewDelegate> {
	IBOutlet NSMenu *menu;
	IBOutlet AIImageCollectionView *imageCollectionView;
	
	AIContactListImagePicker *imagePicker;
	
	NSArray *images;

@private
	NSMutableArray *AI_topLevelObjects;
}

@property (assign) IBOutlet NSMenu *menu;
@property (assign) IBOutlet AIImageCollectionView *imageCollectionView;
@property (retain) AIContactListImagePicker *imagePicker;
@property (copy) NSArray *images;

/*!
 * @brief Open the menu
 *
 * @param aPoint	The bottom-left corner of our parent view
 * @param picker	Our parent AIContactListImagePicker
 */
+ (void)popUpMenuForImagePicker:(AIContactListImagePicker *)picker;

@end
