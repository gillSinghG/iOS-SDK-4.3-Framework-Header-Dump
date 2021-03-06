/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDSheet.h"
#import "OfficeImport-Structs.h"
#import "EDChartSheet.h"

@class CHDChart;

__attribute__((visibility("hidden")))
@interface EDChartSheet : EDSheet {
@private
	CHDChart* mMainChart;
	bool mIsBoundsSet;
	CGRect mBounds;
}
-(id)mainChart;
-(void)setMainChart:(id)chart;
-(bool)areBoundsSet;
-(CGRect)bounds;
-(void)setBounds:(CGRect)bounds;
-(void)addDrawable:(id)drawable;
@end

@interface EDChartSheet (EDInternal)
-(void)teardown;
@end

