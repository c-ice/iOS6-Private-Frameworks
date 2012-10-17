/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SCRCTargetSelectorTimer;

@interface SCRCGestureFactory : NSObject
{
    float _stallDistance;
    float _maxDimension;
    float _thumbRegion;
    int _orientation;
    int _directions[7];
    struct {
        float horizontal;
        float vertical;
    } _axisFlipper;
    float _scaledTrackingDistance;
    BOOL _setTrackingTimer;
    float _flickVelocityThreshold;
    double _tapVelocityThreshold;
    double _echoWaitTime;
    struct CGRect _mainFrame;
    struct CGRect _gutterFrame;
    double _lastTime;
    double _lastDownTime;
    double _lastGutterDownTime;
    float _lastDegrees;
    float _startDegrees;
    float _startDistance;
    BOOL _startedInGutter;
    double _requireDelayBeforeTracking;
    BOOL _requireUp;
    BOOL _thumbRejectionEnabled;
    float _thumbRejectionDistance;
    int _state;
    int _previousState;
    int _direction;
    float _directionalSlope;
    struct SCRCFingerState _finger[2];
    unsigned int _absoluteFingerCount;
    unsigned short _fingerCount;
    unsigned short _lastFingerCount;
    float _distance;
    unsigned int _tapCount;
    struct CGRect _tapFrame;
    struct CGRect _tapMultiFrame;
    struct {
        id track;
        id tap;
        id gutterUp;
        id splitTap;
    } _delegate;
    SCRCTargetSelectorTimer *_trackingTimer;
    struct {
        char down;
        char dead;
        char gutter;
        unsigned int current;
        unsigned int digits;
        unsigned int count;
        struct CGRect frame;
        struct CGPoint location[5];
        struct CGPoint locationPerTap[5];
        unsigned int digitsPerTap;
        double thisTime;
        double lastTime;
    } _tap;
    SCRCTargetSelectorTimer *_tapTimer;
    SCRCTargetSelectorTimer *_gutterUpTimer;
    struct {
        SCRCGestureFactory *factory;
        char isSplitting;
        char isTapping;
        char fastTrack;
        char tapDead;
        char timedOut;
        char active;
        unsigned int fingerIdentifier;
        double fingerDownTime;
        struct CGPoint startTapLocation;
        struct CGPoint lastTapLocation;
        struct CGPoint primaryFingerLocation;
        float tapDistance;
        int state;
    } _split;
}

@property(nonatomic) BOOL thumbRejectionEnabled; // @synthesize thumbRejectionEnabled=_thumbRejectionEnabled;
- (id)gestureStateString;
- (double)tapInterval;
- (struct CGPoint)tapPointWeightedToSides;
- (struct CGPoint)tapPoint;
- (struct CGRect)multiTapFrame;
- (struct CGRect)tapFrame;
- (struct CGPoint)endLocation;
- (struct CGPoint)startLocation;
- (struct CGPoint)rawLocation;
- (BOOL)tapIsDown;
- (unsigned int)tapCount;
- (unsigned int)fingerCount;
- (unsigned int)absoluteFingerCount;
- (float)distance;
- (float)velocity;
- (float)vector;
- (int)direction;
- (int)gestureState;
- (float)directionalSlope;
- (void)reset;
- (void)_up;
- (void)_drag:(id)arg1;
- (void)_down:(id)arg1;
- (void)handleGestureEvent:(id)arg1;
- (BOOL)_handleSplitEvent:(id)arg1;
- (BOOL)_handleSplitTap;
- (void)_updateStartWithPoint:(struct CGPoint)arg1 time:(double)arg2;
- (void)_processUpAndPost:(BOOL)arg1;
- (void)_handleGutterUp;
- (void)_enterTrackingMode:(id)arg1;
- (void)_handleTap;
- (void)_updateTapState;
- (void)_updateMultiTapFrame;
- (struct CGRect)_currentTapRect;
- (struct CGRect)mainFrame;
- (void)dealloc;
- (int)orientation;
- (void)setOrientation:(int)arg1;
- (float)tapSpeed;
- (void)setTapSpeed:(float)arg1;
- (float)flickSpeed;
- (void)setFlickSpeed:(float)arg1;
- (id)initWithSize:(struct CGSize)arg1 delegate:(id)arg2 threadKey:(id)arg3;
- (id)initWithSize:(struct CGSize)arg1 delegate:(id)arg2;

@end

