/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren;

@interface CoreDAVPropFindItem : CoreDAVItem {
	CoreDAVItemWithNoChildren* _propName;
	CoreDAVItemWithNoChildren* _allProp;
	CoreDAVItem* _include;
	CoreDAVItem* _prop;
}
@property(retain) CoreDAVItemWithNoChildren* propName;
@property(retain) CoreDAVItemWithNoChildren* allProp;
@property(retain) CoreDAVItem* include;
@property(retain) CoreDAVItem* prop;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyParseRules;
@end
