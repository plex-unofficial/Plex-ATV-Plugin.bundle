/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRMenuController.h"
#import "BackRow-Structs.h"
#import "BRMenuListItemProvider.h"

@class NSMutableArray, NSString, NSDictionary;

@interface BROptionDialog : BRMenuController <BRMenuListItemProvider> {
@private
	NSString *_tag;	// 100 = 0x64
	int _currentSelection;	// 104 = 0x68
	NSDictionary *_userInfo;	// 108 = 0x6c
	NSMutableArray *_options;	// 112 = 0x70
	id _delegate;	// 116 = 0x74
	SEL _actionSelector;	// 120 = 0x78
}
@property(retain) NSString *tag;	// G=0x32d75fed; S=0x32d75e95; converted property
@property(retain) NSDictionary *userInfo;	// G=0x32d75491; S=0x32d752d1; converted property
- (id)init;	// 0x32d74d45
- (BOOL)_itemSelected:(id)selected;	// 0x32dac375
- (void)_setSelectedIndex:(long)index;	// 0x32d75fdd
- (void)addOptionText:(id)text;	// 0x32d75145
- (void)addOptionText:(id)text isDefault:(BOOL)aDefault;	// 0x32d750e1
- (void)dealloc;	// 0x32d764ed
- (float)heightForRow:(long)row;	// 0x32d75185
- (long)itemCount;	// 0x32d74f39
- (id)itemForRow:(long)row;	// 0x32d75189
- (float)listVerticalOffset;	// 0x32dac425
- (BOOL)rowSelectable:(long)selectable;	// 0x32dac315
- (long)selectedIndex;	// 0x32d75481
- (id)selectedText;	// 0x32dac459
- (void)setActionSelector:(SEL)selector target:(id)target;	// 0x32d7527d
// converted property setter: - (void)setTag:(id)tag;	// 0x32d75e95
// converted property setter: - (void)setUserInfo:(id)info;	// 0x32d752d1
// converted property getter: - (id)tag;	// 0x32d75fed
- (id)titleForRow:(long)row;	// 0x32d75235
// converted property getter: - (id)userInfo;	// 0x32d75491
@end

