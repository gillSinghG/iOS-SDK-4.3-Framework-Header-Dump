/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVReencodedAudioSettingsForFig.h"
#import "AVDecodedAudioSettingsForFig.h"
#import "AVAudioOutputSettings.h"


@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig> {
@private
	BOOL _dictionaryWasFullyFormed;
}
+(id)eligibleOutputSettingsDictionaryKeys;
+(id)_audioOutputSettingsWithAudioSettingsDictionary:(id)audioSettingsDictionary exceptionReason:(id*)reason;
-(id)initWithAVAudioSettingsDictionary:(id)avaudioSettingsDictionary exceptionReason:(id*)reason;
-(BOOL)willYieldCompressedSamples;
-(BOOL)isDictionaryFullyFormed;
-(void)getAudioStreamBasicDescription:(AudioStreamBasicDescription*)description forAudioFileTypeID:(unsigned long)audioFileTypeID sourceFormatDescription:(opaqueCMFormatDescription*)description3;
-(AudioChannelLayout*)copyAudioChannelLayoutAndSize:(unsigned*)size;
-(id)audioOptions;
@end

