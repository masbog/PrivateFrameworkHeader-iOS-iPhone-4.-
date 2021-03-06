/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUProgressStage, NSDate;

@interface TSUProgressContext : NSObject  {
    TSUProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    double m_lastProgressReport;
}

+ (void)setMessage:(id)arg1;
+ (void)reset;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)setProgress:(double)arg1;
+ (id)_singletonAlloc;
+ (id)sharedContext;
+ (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
+ (void)removeProgressObserver:(id)arg1;
+ (void)createStageWithSteps:(double)arg1;
+ (void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1;
+ (double)overallProgress;
+ (void)setPercentageProgressFromCPProgressContext:(double)arg1;
+ (void)advanceProgress:(double)arg1;
+ (double)currentPosition;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
+ (void)endStage;

- (void)_reset;
- (void)release;
- (id)init;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)retainCount;
- (id)autorelease;
- (id)currentStage;
- (void)reportProgress:(double)arg1;

@end
