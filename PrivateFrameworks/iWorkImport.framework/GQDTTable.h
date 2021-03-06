/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDGraphic.h"
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"

@class GQDTTableModel, GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDTTable : GQDGraphic <GQDNameMappable> {
@private
	GQDTTableModel* mModel;
	GQDSStyle* mStyle;
	BOOL mIsStreamed;
}
+(const StateSpec*)stateForReading;
-(void)dealloc;
-(id)model;
-(void)setModel:(id)model;
-(id)tableStyle;
-(void)setTableStyle:(id)style;
-(BOOL)isStreamed;
-(id)defaultVectorStyleForVectorType:(int)vectorType;
-(int)walkTableWithGenerator:(Class)generator state:(id)state;
@end

