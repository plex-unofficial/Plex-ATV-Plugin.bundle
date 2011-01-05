/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

//

@class NSString;

__attribute__((visibility("hidden")))
@interface BRVOSpeechAction : NSObject {
@private
	NSString *_string;	// 4 = 0x4
	NSString *_pitch;	// 8 = 0x8
	NSString *_language;	// 12 = 0xc
	BOOL _shouldQueue;	// 16 = 0x10
	BOOL _cannotInterrupt;	// 17 = 0x11
	id _completionCallback;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL cannotInterrupt;	// G=0x32e582f9; S=0x32e58309; @synthesize=_cannotInterrupt
@property(copy, nonatomic) id completionCallback;	// G=0x32e582d9; S=0x32e58f6d; @synthesize=_completionCallback
@property(retain, nonatomic) NSString *language;	// G=0x32e582e9; S=0x32e58f45; @synthesize=_language
@property(retain, nonatomic) NSString *pitch;	// G=0x32e58339; S=0x32e58f1d; @synthesize=_pitch
@property(assign, nonatomic) BOOL shouldQueue;	// G=0x32e58319; S=0x32e58329; @synthesize=_shouldQueue
@property(copy, nonatomic) NSString *string;	// G=0x32e58349; S=0x32e58ef1; @synthesize=_string
+ (id)actionWithString:(id)string shouldQueue:(BOOL)queue;	// 0x32e58c79
// declared property getter: - (BOOL)cannotInterrupt;	// 0x32e582f9
// declared property getter: - (id)completionCallback;	// 0x32e582d9
- (void)dealloc;	// 0x32e58e71
- (id)description;	// 0x32e58c29
// declared property getter: - (id)language;	// 0x32e582e9
// declared property getter: - (id)pitch;	// 0x32e58339
// declared property setter: - (void)setCannotInterrupt:(BOOL)interrupt;	// 0x32e58309
// declared property setter: - (void)setCompletionCallback:(id)callback;	// 0x32e58f6d
// declared property setter: - (void)setLanguage:(id)language;	// 0x32e58f45
// declared property setter: - (void)setPitch:(id)pitch;	// 0x32e58f1d
// declared property setter: - (void)setShouldQueue:(BOOL)queue;	// 0x32e58329
// declared property setter: - (void)setString:(id)string;	// 0x32e58ef1
// declared property getter: - (BOOL)shouldQueue;	// 0x32e58319
// declared property getter: - (id)string;	// 0x32e58349
@end
