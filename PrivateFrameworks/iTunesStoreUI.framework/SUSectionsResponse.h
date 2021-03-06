/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSDictionary, NSMutableDictionary;

@interface SUSectionsResponse : XXUnknownSuperclass {
@private
	BOOL _cacheable;
	NSDictionary* _rawResponseDictionary;
	int _responseType;
	NSMutableDictionary* _sectionsCache;
	BOOL _shouldResetUserOrdering;
@protected
	NSArray* _sections;
}
@property(assign, nonatomic, getter=isCacheable) BOOL cacheable;
@property(readonly, assign, nonatomic) NSDictionary* rawResponseDictionary;
@property(readonly, assign, nonatomic) int responseType;
@property(readonly, assign, nonatomic) NSArray* sections;
@property(assign, nonatomic) BOOL shouldResetUserOrdering;
@property(readonly, assign, nonatomic) NSString* versionString;
@property(readonly, assign, nonatomic) NSDictionary* sectionsDictionary;
@property(readonly, assign, nonatomic) NSString* moreListTitle;
@property(readonly, assign, nonatomic) NSArray* allSections;
-(id)init;
-(id)initWithSectionsDictionary:(id)sectionsDictionary responseType:(int)type;
-(void)dealloc;
-(void)_applyDefaultSearchFieldConfigurationsToSections:(id)sections;
-(id)_newSectionsFromDictionary:(id)dictionary;
@end

