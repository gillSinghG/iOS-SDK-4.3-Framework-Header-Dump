/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebBackForwardList.h"
#import "WebKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class WebBackForwardListPrivate;

@interface WebBackForwardList : XXUnknownSuperclass {
@private
	WebBackForwardListPrivate* _private;
}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(void)_close;
-(void)addItem:(id)item;
-(void)removeItem:(id)item;
-(id)dictionaryRepresentation;
-(void)setToMatchDictionaryRepresentation:(id)matchDictionaryRepresentation;
-(BOOL)containsItem:(id)item;
-(void)goBack;
-(void)goForward;
-(void)goToItem:(id)item;
-(id)backItem;
-(id)currentItem;
-(id)forwardItem;
-(id)backListWithLimit:(int)limit;
-(id)forwardListWithLimit:(int)limit;
-(int)capacity;
-(void)setCapacity:(int)capacity;
-(id)description;
-(void)setPageCacheSize:(unsigned)size;
-(unsigned)pageCacheSize;
-(int)backListCount;
-(int)forwardListCount;
-(id)itemAtIndex:(int)index;
@end

@interface WebBackForwardList (WebBackForwardListInternal)
-(id)initWithBackForwardList:(PassRefPtr<WebCore::BackForwardList>)backForwardList;
@end

