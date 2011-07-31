/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface GKReachability : XXUnknownSuperclass {
	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;
}
+(id)reachabilityWithHostName:(id)hostName;
+(id)reachabilityWithAddress:(const sockaddr_in*)address;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
-(BOOL)startNotifier;
-(void)stopNotifier;
-(void)dealloc;
-(int)localWiFiStatusForFlags:(unsigned)flags;
-(int)networkStatusForFlags:(unsigned)flags;
-(BOOL)connectionRequired;
-(int)currentReachabilityStatus;
@end
