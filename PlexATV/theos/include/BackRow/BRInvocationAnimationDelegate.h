/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

//

@class NSInvocation;

@interface BRInvocationAnimationDelegate : NSObject {
@private
	NSInvocation *_startInvocation;	// 4 = 0x4
	NSInvocation *_endInvocation;	// 8 = 0x8
	id _endTarget;	// 12 = 0xc
}
@property(readonly, retain) NSInvocation *endInvocation;	// G=0x32e19305; converted property
@property(readonly, retain) NSInvocation *startInvocation;	// G=0x32e192f5; converted property
+ (id)delegateWithEndInvocation:(id)endInvocation;	// 0x32e196b1
+ (id)delegateWithStartInvocation:(id)startInvocation;	// 0x32e1966d
+ (id)delegateWithStartInvocation:(id)startInvocation endInvocation:(id)invocation;	// 0x32e19625
+ (id)delegateWithTarget:(id)target endSelector:(SEL)selector;	// 0x32e195f1
+ (id)delegateWithTarget:(id)target startSelector:(SEL)selector;	// 0x32e195bd
+ (id)delegateWithTarget:(id)target startSelector:(SEL)selector endSelector:(SEL)selector3;	// 0x32e194b5
- (id)initWithStartInvocation:(id)startInvocation endInvocation:(id)invocation;	// 0x32e19761
- (void)animationDidStart:(id)animation;	// 0x32e19411
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x32e19315
- (void)dealloc;	// 0x32e196f5
// converted property getter: - (id)endInvocation;	// 0x32e19305
// converted property getter: - (id)startInvocation;	// 0x32e192f5
@end

