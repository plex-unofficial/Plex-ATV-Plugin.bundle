/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

//
#import "BRImageProxy.h"

@class BRXMLMediaAsset;

__attribute__((visibility("hidden")))
@interface BRXMLImageProxy : NSObject <BRImageProxy> {
@private
	BRXMLMediaAsset *_asset;	// 4 = 0x4
}
+ (id)imageProxyForAsset:(id)asset;	// 0x32da1941
- (id)initWithAsset:(id)asset;	// 0x32da1eb5
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x32da17e9
- (void)dealloc;	// 0x32da1e6d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x32da185d
- (id)imageForImageSize:(int)imageSize;	// 0x32da18a1
- (id)imageIDForImageSize:(int)imageSize;	// 0x32da18f1
- (id)object;	// 0x32da17ed
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x32da17fd
@end

