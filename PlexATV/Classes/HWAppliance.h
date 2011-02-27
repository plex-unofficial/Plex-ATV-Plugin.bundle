/*
 *  HWAppliance.h
 *  atvTwo
 *
 *  Created by Frank Bauer on 15.01.11.
 *
 */


#import "BackRowExtras.h"
@class TopShelfController, PlexMediaContainer;

@interface PlexAppliance: BRBaseAppliance <MachineManagerDelegate> {
	TopShelfController *_topShelfController;
	NSMutableArray *_applianceCategories;
	
	BRApplianceCategory *otherServersApplianceCategory;
	BRApplianceCategory *settingsApplianceCategory;
}
@property(nonatomic, readonly, retain) id topShelfController;
@property(retain) NSMutableArray *applianceCat;

- (void)showGridListControl:(PlexMediaContainer*)movieCategory;
- (void)showSeriesController:(PlexMediaContainer *)tvShowCategory;
@end