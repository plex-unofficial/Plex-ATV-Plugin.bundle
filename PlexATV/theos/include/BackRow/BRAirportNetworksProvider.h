/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRProvider.h"
//

@class NSArray;

@interface BRAirportNetworksProvider : NSObject <BRProvider> {
@private
	NSArray *_networks;	// 4 = 0x4
}
- (id)initWithNetworks:(id)networks;	// 0x32e41a89
- (id)controlFactory;	// 0x32e419dd
- (id)dataAtIndex:(long)index;	// 0x32e4199d
- (long)dataCount;	// 0x32e419bd
- (void)dealloc;	// 0x32e41ad9
- (id)hashForDataAtIndex:(long)index;	// 0x32e41945
- (void)setNetworks:(id)networks;	// 0x32e41a19
@end

