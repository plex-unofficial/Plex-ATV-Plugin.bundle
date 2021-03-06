/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRPanelControl.h"
#import "BackRow-Structs.h"


@interface BRWebOverlayControl : BRPanelControl {
@private
	BOOL _currentlyShowing;	// 68 = 0x44
}
- (id)init;	// 0x32e2c885
- (BOOL)brEventAction:(id)action;	// 0x32e2c825
- (void)hideControl;	// 0x32e2cb89
- (BOOL)isShowing;	// 0x32e2c7e9
- (void)showControl;	// 0x32e2c9f9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32e2c99d
- (void)toggleShownHidden;	// 0x32e2c7f9
@end

