/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKEventDetailCell.h"


__attribute__((visibility("hidden")))
@interface EKEventDetailPreviewCell : EKEventDetailCell {
@private
	BOOL _alwaysVisible;
}
@property(assign, nonatomic) BOOL alwaysVisible;
-(id)initWithEvent:(id)event editable:(BOOL)editable;
-(BOOL)update;
@end

