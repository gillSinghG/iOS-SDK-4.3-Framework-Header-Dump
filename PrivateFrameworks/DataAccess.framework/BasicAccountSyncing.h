/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "NSObject.h"


@protocol BasicAccountSyncing <NSObject>
-(BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass;
-(BOOL)refreshContainersForDataclass:(id)dataclass;
-(BOOL)refreshContainerListForDataclass:(id)dataclass;
-(id)defaultContainerIdentifierForDataclass:(id)dataclass;
@end

