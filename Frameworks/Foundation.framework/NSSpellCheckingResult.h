/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTextCheckingResult.h"
#import "Foundation-Structs.h"


@interface NSSpellCheckingResult : NSTextCheckingResult {
@private
	NSRange _range;
}
-(id)initWithRange:(NSRange)range;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(unsigned long long)resultType;
-(NSRange)range;
-(id)resultByAdjustingRangesWithOffset:(int)offset;
-(BOOL)_adjustRangesWithOffset:(int)offset;
@end
