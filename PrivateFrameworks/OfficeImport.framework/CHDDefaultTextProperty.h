/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CHDDefaultTextProperty.h"
#import "EDKeyedObject.h"

@class EDRunsCollection, EDResources;

__attribute__((visibility("hidden")))
@interface CHDDefaultTextProperty : XXUnknownSuperclass <EDKeyedObject> {
@private
	EDResources* mResources;
	int mDefaultTextType;
	unsigned mContentFormatId;
	EDRunsCollection* mRuns;
	int mLabelPosition;
	bool mShowCategoryLabel;
	bool mShowValueLabel;
	bool mShowPercentageLabel;
	bool mShowSeriesLabel;
}
+(id)defaultTextPropertyWithResources:(id)resources;
-(id)initWithResources:(id)resources;
-(void)dealloc;
-(int)defaultTextType;
-(void)setDefaultTextType:(int)type;
-(id)runs;
-(void)setRuns:(id)runs;
-(id)contentFormat;
-(void)setContentFormat:(id)format;
-(unsigned)key;
-(int)labelPosition;
-(void)setLabelPosition:(int)position;
-(bool)isShowCategoryLabel;
-(void)setIsShowCategoryLabel:(bool)label;
-(bool)isShowValueLabel;
-(void)setIsShowValueLabel:(bool)label;
-(bool)isShowPercentageLabel;
-(void)setIsShowPercentageLabel:(bool)label;
-(bool)isShowSeriesLabel;
-(void)setIsShowSeriesLabel:(bool)label;
@end

@interface CHDDefaultTextProperty (CHDInternal)
-(unsigned)contentFormatId;
-(void)setContentFormatId:(unsigned)anId;
@end

