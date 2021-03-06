/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRMediaMenuController.h"
#import "BackRow-Structs.h"
#import "BRMenuListItemProvider.h"

@class NSArray, NSDictionary;

@interface BRMediaShareListController : BRMediaMenuController <BRMenuListItemProvider> {
@private
	Class _mediaControllerClass;	// 132 = 0x84
	BRController *_noMediaErrorController;	// 136 = 0x88
	BRController *_mountingController;	// 140 = 0x8c
	NSDictionary *_selectedHostInfo;	// 144 = 0x90
	BOOL _isMounting;	// 148 = 0x94
	BOOL _isUnmounting;	// 149 = 0x95
	BOOL _hostDisconnected;	// 150 = 0x96
	NSArray *_hostInfos;	// 152 = 0x98
}
- (id)init;	// 0x32def7fd
- (void)_addNotifications;	// 0x32deede9
- (void)_checkMountStatus:(id)status;	// 0x32def8fd
- (void)_currentMediaHostRemoved:(id)removed;	// 0x32defd19
- (id)_hostForHostInfoIndex:(long)hostInfoIndex;	// 0x32deeb81
- (id)_hostInfos;	// 0x32deebe9
- (BOOL)_isHostValid:(id)valid;	// 0x32def089
- (void)_mediaHostsChanged:(id)changed;	// 0x32deee65
- (void)_mountHost:(id)host;	// 0x32def1b1
- (void)_networkChanged:(id)changed;	// 0x32deee3d
- (void)_removeNotifications;	// 0x32deeda1
- (long)_rowForTitle:(id)title;	// 0x32deea21
- (id)_selectedHost;	// 0x32deeb51
- (void)_unmountStreamingHostsExcludingHost:(id)host;	// 0x32def0c1
- (void)_updateHostInfos;	// 0x32deeb09
- (id)_waitControllerForHost:(id)host;	// 0x32deeccd
- (id)_wirelessPreviewController;	// 0x32deea81
- (void)controlWasActivated;	// 0x32def69d
- (void)controlWasDeactivated;	// 0x32def4fd
- (void)dealloc;	// 0x32def755
- (float)heightForRow:(long)row;	// 0x32dee9ed
- (long)itemCount;	// 0x32def389
- (id)itemForRow:(long)row;	// 0x32def3ad
- (void)itemSelected:(long)selected;	// 0x32def6e9
- (id)previewControlForItem:(long)item;	// 0x32def741
- (BOOL)rowSelectable:(long)selectable;	// 0x32dee9f1
- (void)setMediaControllerClass:(Class)aClass errorController:(id)controller;	// 0x32def47d
- (id)titleForRow:(long)row;	// 0x32def365
- (void)wasExhumed;	// 0x32def539
- (void)wasPopped;	// 0x32dee9f5
- (void)wasPushed;	// 0x32def5dd
@end

