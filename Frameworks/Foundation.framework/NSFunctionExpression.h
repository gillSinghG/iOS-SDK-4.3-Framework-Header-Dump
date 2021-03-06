/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSArray;

@interface NSFunctionExpression : NSExpression {
@private
	NSExpression* _operand;
	SEL _selector;
	NSArray* _arguments;
}
-(void)dealloc;
-(id)initWithSelector:(SEL)selector argumentArray:(id)array;
-(id)initWithExpressionType:(unsigned)expressionType operand:(id)operand selector:(SEL)selector argumentArray:(id)array;
-(id)initWithTarget:(id)target selectorName:(id)name arguments:(id)arguments;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)function;
-(id)operand;
-(SEL)selector;
-(id)arguments;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)expressionValueWithObject:(id)object context:(id)context;
-(id)binaryOperatorForSelector;
-(id)predicateFormat;
-(BOOL)_shouldUseParensWithDescription;
-(void)acceptVisitor:(id)visitor flags:(unsigned)flags;
-(id)_expressionWithSubstitutionVariables:(id)substitutionVariables;
@end

