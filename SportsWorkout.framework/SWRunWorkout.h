/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class SWRunSensor, SWPaceModel, NSData;

@interface SWRunWorkout : SWWorkout  {
    SWRunSensor *_sensor;
    SWPaceModel *_paceModel;
    BOOL _hasStarted;
    float _weightInLbs;
    BOOL _isCalibration;
}

@property(readonly) float maximumCalibrationDistanceMiles;
@property(readonly) float minimumCalibrationDistanceMiles;
@property(readonly) BOOL canBeUsedForRunCalibration;
@property(readonly) BOOL canBeUsedForWalkCalibration;
@property(copy) NSData * paceModelParameters;
@property(readonly) BOOL isWalk;
@property BOOL isCalibration;
@property float weightInLbs;
@property(readonly) SWRunSensor * sensor;

+ (id)workoutWithSensor:(id)arg1;

- (void)dealloc;
- (void)sensor:(id)arg1 didReceivePacketPayload:(const char *)arg2 timestamp:(unsigned long)arg3;
- (void)pauseWorkout;
- (void)setPaceModelParameters:(id)arg1;
- (void)setWeightInLbs:(float)arg1;
- (id)sensor;
- (id)workoutData;
- (BOOL)canBeUsedForWalkCalibration;
- (void)activateWorkout;
- (float)weightInLbs;
- (BOOL)isWalk;
- (id)initWithSensor:(id)arg1;
- (id)paceModelParameters;
- (BOOL)canBeUsedForRunCalibration;
- (float)minimumCalibrationDistanceMiles;
- (float)maximumCalibrationDistanceMiles;
- (BOOL)calibrateWithDistanceMiles:(float)arg1 forWalk:(BOOL)arg2;
- (BOOL)recalibrateWithAdjustedDistanceMiles:(float)arg1;
- (BOOL)isCalibration;
- (void)setIsCalibration:(BOOL)arg1;
- (void)resetCalibration;

@end
