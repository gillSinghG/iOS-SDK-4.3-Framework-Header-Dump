/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iWorkImport-Structs.h"

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQHBulletInfo : XXUnknownSuperclass {
@private
	int mType;
	int mBulletIndent;
	int mTextIndent;
	CFStringRef mChar;
	BOOL mHasNumber;
	int mNumber;
	int mLabelType;
	GQDSStyle* mStyle;
}
-(void)dealloc;
-(void)setNumber:(int)number;
-(int)number;
-(BOOL)hasNumber;
-(void)setHasNumber:(BOOL)number;
-(void)setLabelType:(int)type;
-(int)labelType;
-(void)setType:(int)type;
-(int)type;
-(void)setBulletChar:(CFStringRef)aChar;
-(CFStringRef)bulletChar;
-(CFStringRef)createTierStringNumber;
-(void)setBulletIndent:(int)indent;
-(int)bulletIndent;
-(void)setTextIndent:(int)indent;
-(int)textIndent;
-(void)setStyle:(id)style;
-(id)style;
@end

