/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>


@interface CLSimulationManager : NSObject {
	double _locationDistance;
	double _locationInterval;
	double _locationSpeed;
	int _locationRepeatBehavior;
	int _locationDeliveryBehavior;
}
@property(assign, nonatomic) double locationDistance;
@property(assign, nonatomic) double locationInterval;
@property(assign, nonatomic) double locationSpeed;
@property(assign, nonatomic) int locationRepeatBehavior;
@property(assign, nonatomic) int locationDeliveryBehavior;
-(id)init;
-(void)clearSimulatedLocations;
-(void)appendSimulatedLocation:(id)location;
-(void)startLocationSimulation;
-(void)stopLocationSimulation;
-(void)clearSimulatedCells;
-(void)setSimulatedCell:(id)cell;
-(void)startCellSimulation;
-(void)stopCellSimulation;
-(void)setSimulatedCellRegistrationStatus:(BOOL)status;
-(void)setWifiScanResults:(id)results;
-(void)startWifiSimulation;
-(void)stopWifiSimulation;
-(void)setSimulatedWifiPower:(BOOL)power;
@end
