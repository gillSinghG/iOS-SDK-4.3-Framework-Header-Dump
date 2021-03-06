/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import "CoreMotion-Structs.h"
#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface CMMotionManagerInternal : NSObject {
	CLAccelerometer* fAccelerometer;
	Dispatcher* fAccelerometerDispatcher;
	double fAccelerometerUpdateInterval;
	id fAccelerometerHandler;
	NSOperationQueue* fAccelerometerQueue;
	double fLastAccelerometerNotificationTimestamp;
	bool fStartAccelerometerOnResume;
	CLGyro* fGyro;
	Dispatcher* fGyroDispatcher;
	double fGyroUpdateInterval;
	id fGyroHandler;
	NSOperationQueue* fGyroQueue;
	double fLastGyroNotificationTimestamp;
	bool fStartGyroOnResume;
	CLDeviceMotion* fDeviceMotion;
	Dispatcher* fDeviceMotionDispatcher;
	double fDeviceMotionUpdateInterval;
	id fDeviceMotionHandler;
	NSOperationQueue* fDeviceMotionQueue;
	double fLastDeviceMotionNotificationTimestamp;
	bool fStartDeviceMotionOnResume;
	Dispatcher* fPrivateAccelerometerDataDispatcher;
	/*function-pointer*/ void* fPrivateAccelerometerDataCallback;
	void* fPrivateAccelerometerDataCallbackInfo;
	Dispatcher* fPrivateGyroDataDispatcher;
	/*function-pointer*/ void* fPrivateGyroDataCallback;
	void* fPrivateGyroDataCallbackInfo;
	Dispatcher* fPrivateDeviceMotionDispatcher;
	/*function-pointer*/ void* fPrivateDeviceMotionCallback;
	void* fPrivateDeviceMotionCallbackInfo;
	CLMagnetometer* fMagnetometer;
	Dispatcher* fMagnetometerDispatcher;
	double fMagnetometerUpdateInterval;
	id fMagnetometerHandler;
	NSOperationQueue* fMagnetometerQueue;
	double fLastMagnetometerNotificationTimestamp;
	bool fStartMagnetometerOnResume;
	bool fShowsDeviceMovementDisplay;
	bool fInactive;
}
-(id)initWithInfo:(id)info;
-(void)dealloc;
@end

