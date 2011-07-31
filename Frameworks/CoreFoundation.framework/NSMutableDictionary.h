/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSDictionary.h"


@interface NSMutableDictionary : NSDictionary {
}
+(id)dictionaryWithCapacity:(unsigned)capacity;
-(void)setObject:(id)object forKey:(id)key;
-(void)removeObjectForKey:(id)key;
-(void)addEntriesFromDictionary:(id)dictionary;
-(void)addObject:(id)object forKey:(id)key;
-(void)replaceObject:(id)object forKey:(id)key;
-(void)removeAllObjects;
-(void)setDictionary:(id)dictionary;
-(void)removeObjectsForKeys:(id)keys;
-(void)removeKeysForObject:(id)object;
-(void)invert;
-(id)initWithCapacity:(unsigned)capacity;
-(id)initWithObjects:(id*)objects forKeys:(id*)keys count:(unsigned)count;
@end
