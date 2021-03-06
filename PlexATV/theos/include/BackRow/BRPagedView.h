/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRDotArrayControl, BRImage, BRImageControl, CATransition;

@interface BRPagedView : BRControl {
@private
	id _delegate;	// 40 = 0x28
	id _datasource;	// 44 = 0x2c
	long _currentPage;	// 48 = 0x30
	BRControl *_contentPanel;	// 52 = 0x34
	BRControl *_content;	// 56 = 0x38
	BRImage *_arrowImage;	// 60 = 0x3c
	BRImageControl *_rightArrow;	// 64 = 0x40
	BRImageControl *_leftArrow;	// 68 = 0x44
	BRDotArrayControl *_pageDots;	// 72 = 0x48
	CATransition *_prevPageTransition;	// 76 = 0x4c
	CATransition *_nextPageTransition;	// 80 = 0x50
}
@property(retain) id datasource;	// G=0x32e5f119; S=0x32e5f4f9; converted property
@property(assign) id delegate;	// G=0x32e5f129; S=0x32e5f46d; converted property
- (id)init;	// 0x32e5f76d
- (BOOL)_nextPage;	// 0x32e5f221
- (BOOL)_prevPage;	// 0x32e5f139
- (BOOL)brEventAction:(id)action;	// 0x32e5f329
// converted property getter: - (id)datasource;	// 0x32e5f119
- (void)dealloc;	// 0x32e5f6a5
// converted property getter: - (id)delegate;	// 0x32e5f129
- (void)layoutSubcontrols;	// 0x32e5fad5
- (void)reloadData;	// 0x32e5f585
// converted property setter: - (void)setDatasource:(id)datasource;	// 0x32e5f4f9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32e5f46d
@end

