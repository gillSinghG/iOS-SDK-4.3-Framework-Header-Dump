/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSArray;

@interface NSBlockExpression : NSExpression {
	id _block;
	NSArray* _arguments;
}
-(id)initWithType:(unsigned)type block:(id)block arguments:(id)arguments;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)expressionBlock;
-(id)arguments;
-(id)expressionValueWithObject:(id)object context:(id)context;
-(id)predicateFormat;
-(id)_expressionWithSubstitutionVariables:(id)substitutionVariables;
-(void)acceptVisitor:(id)visitor flags:(unsigned)flags;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
@end
