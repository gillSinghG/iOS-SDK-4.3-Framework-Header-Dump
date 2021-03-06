/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MPVector.h"
#import "iLifeSlideshow-Structs.h"


@interface MPVector : XXUnknownSuperclass {
	XXStruct_Te64nB _vector;
}
+(id)vectorFromString:(id)string;
+(id)vectorWithValues:(id)values;
+(id)vectorFromColor:(id)color;
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(float)valueAtIndex:(int)index;
-(int)count;
-(id)string;
-(id)CIColorString;
-(id)color;
-(id)values;
-(void)setValues:(id)values;
-(BOOL)isEqualTo:(id)to;
@end

@interface MPVector (Private)
+(id)vectorFromMCVector:(XXStruct_Te64nB)mcvector;
-(void)setVector:(XXStruct_Te64nB)vector;
-(XXStruct_Te64nB)vector;
@end

