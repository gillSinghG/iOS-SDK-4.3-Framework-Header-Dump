/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "NSObject.h"


@protocol ABServerSearchDataSourceDelegate <NSObject>
-(void)serverSearchDataSource:(id)source didUpdateResultsWithLocalizedError:(id)localizedError;
-(void)serverSearchDataSource:(id)source didSelectPerson:(void*)person cell:(id)cell;
-(id)serverSearchDataSourceStyleProvider:(id)provider;
@optional
-(void)abScrollViewDidBeginDragging:(id)abScrollView;
@end
