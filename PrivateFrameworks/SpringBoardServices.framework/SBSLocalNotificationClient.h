/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBSLocalNotificationClient : XXUnknownSuperclass {
}
+(id)getPendingNotification;
+(void)_scheduleLocalNotifications:(id)notifications cancel:(BOOL)cancel replace:(BOOL)replace;
+(void)scheduleLocalNotification:(id)notification;
+(void)cancelLocalNotification:(id)notification;
+(void)cancelAllLocalNotifications;
+(void)setScheduledLocalNotifications:(id)notifications;
+(id)scheduledLocalNotifications;
@end
