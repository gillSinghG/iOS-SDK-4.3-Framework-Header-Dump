/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUItemCellConfiguration.h"
#import "iTunesStoreUI-Structs.h"


@interface SUBannerCellConfiguration : SUItemCellConfiguration {
}
+(id)copyDefaultContext;
+(float)minimumRowHeight;
+(float)rowHeightForContext:(id)context representedObject:(id)object;
-(id)init;
-(id)copyImageDataProvider;
-(void)reloadAfterArtworkLoad;
-(void)reloadData;
-(void)reloadImages;
-(void)reloadLayoutInformation;
-(void)reloadStrings;
-(CGSize)_imageSizeForLayoutSize:(CGSize)layoutSize;
@end

