/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICDeviceManagerProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, DeviceManagerThread, NSMutableDictionary;

@interface DeviceManager : XXUnknownSuperclass <ICDeviceManagerProtocol> {
	DeviceManagerThread* _thread;
	NSDictionary* _deviceMatchingInfo;
	NSMutableDictionary* _devices;
}
-(id)init;
-(void)dealloc;
-(void)startRunning;
-(void)stopRunning;
-(int)openDevice:(id)device contextInfo:(void*)info;
-(int)closeDevice:(id)device contextInfo:(void*)info;
-(int)openSession:(id)session contextInfo:(void*)info;
-(int)closeSession:(id)session contextInfo:(void*)info;
-(int)syncClock:(id)clock contextInfo:(void*)info;
-(int)getThumbnailOfFile:(id)file fromDevice:(id)device contextInfo:(void*)info;
-(int)getMetadataOfFile:(id)file fromDevice:(id)device contextInfo:(void*)info;
-(int)deleteFile:(id)file fromDevice:(id)device contextInfo:(void*)info;
-(int)downloadFile:(id)file fromDevice:(id)device options:(id)options contextInfo:(void*)info;
-(int)eject:(id)eject;
-(void)openDeviceImp:(id)imp;
-(void)closeDeviceImp:(id)imp;
-(void)openSessionImp:(id)imp;
-(void)closeSessionImp:(id)imp;
-(void)syncClockImp:(id)imp;
-(void)getThumbnailOfFileImp:(id)fileImp;
-(void)getMetadataOfFileImp:(id)fileImp;
-(void)deleteFileImp:(id)imp;
-(void)downloadFileImp:(id)imp;
-(void)ejectImp:(id)imp;
-(void)postCommandCompletionNotification:(id)notification;
-(void)postNotification:(id)notification;
@end
