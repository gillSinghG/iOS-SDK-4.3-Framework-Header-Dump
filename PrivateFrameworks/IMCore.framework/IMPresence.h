/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IMDirectlyObservableObjectObserver.h"

@class IMHandle, NSString, NSMutableSet, NSSet, NSMutableArray, NSArray;

@interface IMPresence : XXUnknownSuperclass <IMDirectlyObservableObjectObserver> {
	NSMutableArray* _imHandles;
	NSMutableSet* _imHandlesSet;
	NSString* _statusMessage;
	IMHandle* _mostAvailableIMHandle;
	BOOL _quiet;
	unsigned _previousStatus;
	unsigned _status;
}
@property(assign, nonatomic) BOOL isQuiet;
@property(readonly, assign, nonatomic) NSSet* imHandleSet;
@property(readonly, assign, nonatomic) NSArray* imHandles;
@property(readonly, assign, nonatomic) IMHandle* mostAvailableIMHandle;
@property(readonly, assign, nonatomic) unsigned status;
@property(readonly, assign, nonatomic) unsigned previousStatus;
@property(readonly, assign, nonatomic) double timeSinceStatusChanged;
@property(readonly, assign, nonatomic) double timeSinceWentOffline;
@property(readonly, assign, nonatomic) NSString* mobileDeviceName;
@property(readonly, assign, nonatomic) BOOL isMobile;
@property(readonly, assign, nonatomic) NSString* nameOfStatus;
@property(readonly, assign, nonatomic) NSString* previousStatusMessage;
@property(readonly, assign, nonatomic) NSString* statusMessage;
@property(readonly, assign, nonatomic) NSString* nameAndEmail;
@property(readonly, assign, nonatomic) NSString* displayName;
@property(readonly, assign, nonatomic) NSString* shortName;
@property(readonly, assign, nonatomic) NSString* fullName;
@property(readonly, assign, nonatomic) NSString* lastName;
@property(readonly, assign, nonatomic) NSString* firstName;
@property(readonly, assign, nonatomic) NSSet* groups;
@property(readonly, assign, nonatomic) int numberOfIMHandles;
+(id)notifications;
+(id)selectors;
-(id)init;
-(void)dealloc;
-(void)_observeIMHandle:(id)handle;
-(void)_unobserveIMHandle:(id)handle;
-(void)_imHandleCapabilitiesChanged:(id)changed;
-(void)_imHandleStatusChanged:(id)changed;
-(void)_imHandlePictureChanged:(id)changed;
-(void)_imHandleInfoChanged:(id)changed;
-(void)_imHandleGroupsChanged:(id)changed;
-(void)_imHandleExtraPropsChanged:(id)changed;
-(void)_imHandleMobileChanged:(id)changed;
-(void)_imHandleCertsChanged:(id)changed;
-(void)_imHandleSortOrderChanged:(id)changed;
-(void)objectDidPostDirectNotification:(id)object;
-(void)_setMostAvailableIMHandle:(id)handle;
-(BOOL)_fullRecache;
-(BOOL)canAddIMHandle:(id)handle;
-(BOOL)addIMHandle:(id)handle;
-(void)removeIMHandle:(id)handle;
-(BOOL)containsIMHandle:(id)handle;
-(void)postNotificationNamed:(id)named forIMHandle:(id)imhandle;
-(id)description;
@end
