/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "VMUMemory_Base.h"
#import "VMUMemory.h"

@class VMUArchitecture;

@interface VMUMemory_Handle : VMUMemory_Base <VMUMemory> {
	id<VMUMemory> _parent;
	char* _data;
	VMURange _addressRange;
	VMUArchitecture* _architecture;
}
-(id)initWithParent:(id)parent addressRange:(VMURange)range architecture:(id)architecture data:(char*)data;
-(VMURange)addressRange;
-(id)architecture;
-(BOOL)isContiguous;
-(id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;
-(id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;
-(id)view;
-(id)swappedView;
-(id)description;
-(void)dealloc;
@end
