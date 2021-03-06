/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDCollection.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface EDTableStylesCollection : EDCollection {
@private
	NSString* mDefaultTableStyleName;
	NSString* mDefaultPivotStyleName;
}
-(void)dealloc;
-(id)defaultTableStyle;
-(id)defaultPivotStyle;
-(id)objectWithName:(id)name;
-(id)defaultTableStyleName;
-(void)setDefaultTableStyleName:(id)name;
-(id)defaultPivotStyleName;
-(void)setDefaultPivotStyleName:(id)name;
@end

