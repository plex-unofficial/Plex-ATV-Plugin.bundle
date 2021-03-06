/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

//

@class BRAsyncTaskContext, NSMutableArray;
@protocol BRProvider;

@interface BRImageLoader : NSObject {
@private
	long _queueSize;	// 4 = 0x4
	NSMutableArray *_imageQueue;	// 8 = 0x8
	NSMutableArray *_candidateImages;	// 12 = 0xc
	NSMutableArray *_pendingImages;	// 16 = 0x10
	id<BRProvider> _provider;	// 20 = 0x14
	BOOL _randomize;	// 24 = 0x18
	long _serialIndex;	// 28 = 0x1c
	long _imageArrayIndex;	// 32 = 0x20
	long _segmentLength;	// 36 = 0x24
	long _segmentCount;	// 40 = 0x28
	int _fillStrategy;	// 44 = 0x2c
	long _failedLoadCount;	// 48 = 0x30
	BRAsyncTaskContext *_taskContext;	// 52 = 0x34
}
@property(assign) int fillStrategy;	// G=0x32e1417d; S=0x32d7c51d; converted property
@property(assign) long queueSize;	// G=0x32e1418d; S=0x32d7c661; converted property
@property(assign) BOOL randomize;	// G=0x32e1419d; S=0x32d7c75d; converted property
@property(assign) long segmentCount;	// G=0x32e1416d; S=0x32e1432d; converted property
- (id)init;	// 0x32d7c3d5
- (void)_abandonArtwork:(id)artwork;	// 0x32e147cd
- (void)_abandonPendingImageProxyForImageWithID:(id)anId;	// 0x32e15021
- (void)_enqueueImage:(id)image;	// 0x32e14a11
- (BOOL)_isQueuePrimed;	// 0x32d7c9d9
- (id)_pendingImageDictionaryForImageID:(id)imageID;	// 0x32e14375
- (void)_prepareImageForQueue:(id)queue withID:(id)anId;	// 0x32e14491
- (void)_primeQueue;	// 0x32d7c86d
- (void)_promoteCandidateImageProxy:(id)proxy toPendingImageProxyForImageWithID:(id)anId;	// 0x32e148a5
- (void)_providerUpdated:(id)updated;	// 0x32e141b5
- (id)_pullNextImageProxy;	// 0x32e141fd
- (id)_pullNextImageProxyRandomly;	// 0x32e14d81
- (void)_setupForNewProvider;	// 0x32e14bf9
- (void)_updateArtwork:(id)artwork;	// 0x32e14eb5
- (void)dealloc;	// 0x32d7d3ed
// converted property getter: - (int)fillStrategy;	// 0x32e1417d
- (id)finalFormForImage:(id)image;	// 0x32e141ad
- (void)flushQueue;	// 0x32d7c76d
- (long)imageCount;	// 0x32e142d9
- (BOOL)isImageFinalForm:(id)form;	// 0x32e141b1
- (id)nextImage;	// 0x32d7d63d
- (BOOL)queueReady;	// 0x32d7cbe1
// converted property getter: - (long)queueSize;	// 0x32e1418d
// converted property getter: - (BOOL)randomize;	// 0x32e1419d
// converted property getter: - (long)segmentCount;	// 0x32e1416d
// converted property setter: - (void)setFillStrategy:(int)strategy;	// 0x32d7c51d
- (void)setImageProxies:(id)proxies;	// 0x32e142f9
- (void)setProvider:(id)provider;	// 0x32e14631
// converted property setter: - (void)setQueueSize:(long)size;	// 0x32d7c661
// converted property setter: - (void)setRandomize:(BOOL)randomize;	// 0x32d7c75d
// converted property setter: - (void)setSegmentCount:(long)count;	// 0x32e1432d
@end

