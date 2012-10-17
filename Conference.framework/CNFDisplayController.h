/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class CNFAlertView, CNFHUDView, CNFInterfaceOverlayView, CNFVideoGroupView, IMAVChat, IMAVChatParticipant, NSObject<CNFDisplayControllerDelegate>, NSString, NSTimer, TPAudioDeviceView, TPBottomBar, TPBottomDoubleButtonBar, TPBottomLockBar, TPBottomSingleButtonBar, TPLCDView, UIActivityIndicatorView, UIControl, UIImage, UIImageView, UILabel, UIView;

@interface CNFDisplayController : UIViewController
{
    IMAVChat *_currentChat;
    UIControl *_videoGroupView;
    UIView *_localVideoGroupView;
    CNFVideoGroupView *_localVideoContainer;
    UIView *_localVideoView;
    UIView *_localVideoBackView;
    UIImageView *_localVideoFrameView;
    UIView *_remoteVideoGroupView;
    UIControl *_remoteVideoContainer;
    UIView *_remoteVideoView;
    UIView *_remoteVideoBackView;
    UIView *_localVideoOverlayView;
    UIView *_remoteVideoOverlayView;
    UIView *_localVideoMutedView;
    UIView *_remoteVideoPausedView;
    UIView *_remoteVideoDegradedView;
    UIView *_remoteVideoReconnectingView;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_statsHUDTextLabel;
    NSTimer *_statsHUDTimer;
    NSString *_contactName;
    UIImage *_contactImage;
    BOOL _contactNameIsPhoneNumber;
    int _lastKnownOrientation;
    int _style;
    CNFInterfaceOverlayView *_hudOverlayView;
    CNFHUDView *_hudView;
    CNFHUDView *_callInfoHUDView;
    CNFInterfaceOverlayView *_callBarOverlayView;
    TPLCDView *_topBar;
    TPLCDView *_fakeTopBar;
    TPBottomSingleButtonBar *_bottomBar;
    TPBottomDoubleButtonBar *_doubleBottomBar;
    TPBottomBar *_fakeBottomBar;
    TPBottomLockBar *_lockBar;
    TPAudioDeviceView *_routeList;
    CNFAlertView *_errorAlert;
    int _routeListVisible;
    int _routeListReloadPending;
    NSTimer *_autodismissRouteListTimer;
    BOOL _isShowingFullConferenceDisplay;
    BOOL _isShowingCallWaitingUI;
    BOOL _isShowingTopBar;
    BOOL _isShowingVideoDegradedUI;
    BOOL _isShowingVideoReconnectingUI;
    BOOL _waitingForLocalVideoFirstFrame;
    BOOL _supportsAutoRotation;
    BOOL _alwaysVisible;
    BOOL _useLargeTextAndIcons;
    BOOL _userWantsStatusBarShown;
    float _pipScaleFactor;
    unsigned int _displayControllerOptions;
    NSObject<CNFDisplayControllerDelegate> *_delegate;
    NSTimer *_statusLabelTimer;
    UIImageView *_wallpaperView;
    BOOL _stillAnimatingFromVoiceControl;
    BOOL _callFailedWhileAnimatingFromVoiceControl;
}

@property(retain, nonatomic) UIImageView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
@property(retain, nonatomic) TPBottomLockBar *lockBar; // @synthesize lockBar=_lockBar;
@property(retain, nonatomic) TPBottomBar *fakeBottomBar; // @synthesize fakeBottomBar=_fakeBottomBar;
@property(retain, nonatomic) TPBottomDoubleButtonBar *doubleBottomBar; // @synthesize doubleBottomBar=_doubleBottomBar;
@property(retain, nonatomic) TPBottomSingleButtonBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) TPLCDView *fakeTopBar; // @synthesize fakeTopBar=_fakeTopBar;
@property(retain, nonatomic) TPLCDView *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) CNFInterfaceOverlayView *callBarOverlayView; // @synthesize callBarOverlayView=_callBarOverlayView;
@property(retain, nonatomic) CNFHUDView *callInfoHUDView; // @synthesize callInfoHUDView=_callInfoHUDView;
@property(retain, nonatomic) CNFHUDView *hudView; // @synthesize hudView=_hudView;
@property(retain, nonatomic) CNFInterfaceOverlayView *hudOverlayView; // @synthesize hudOverlayView=_hudOverlayView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIView *remoteVideoReconnectingView; // @synthesize remoteVideoReconnectingView=_remoteVideoReconnectingView;
@property(retain, nonatomic) UIView *remoteVideoDegradedView; // @synthesize remoteVideoDegradedView=_remoteVideoDegradedView;
@property(retain, nonatomic) UIView *remoteVideoPausedView; // @synthesize remoteVideoPausedView=_remoteVideoPausedView;
@property(retain, nonatomic) UIView *localVideoMutedView; // @synthesize localVideoMutedView=_localVideoMutedView;
@property(retain, nonatomic) UIView *remoteVideoOverlayView; // @synthesize remoteVideoOverlayView=_remoteVideoOverlayView;
@property(retain, nonatomic) UIView *localVideoOverlayView; // @synthesize localVideoOverlayView=_localVideoOverlayView;
@property(retain, nonatomic) UIView *remoteVideoBackView; // @synthesize remoteVideoBackView=_remoteVideoBackView;
@property(retain, nonatomic) UIView *remoteVideoView; // @synthesize remoteVideoView=_remoteVideoView;
@property(retain, nonatomic) UIControl *remoteVideoContainer; // @synthesize remoteVideoContainer=_remoteVideoContainer;
@property(retain, nonatomic) UIView *remoteVideoGroupView; // @synthesize remoteVideoGroupView=_remoteVideoGroupView;
@property(retain, nonatomic) UIImageView *localVideoFrameView; // @synthesize localVideoFrameView=_localVideoFrameView;
@property(retain, nonatomic) UIView *localVideoBackView; // @synthesize localVideoBackView=_localVideoBackView;
@property(retain, nonatomic) UIView *localVideoView; // @synthesize localVideoView=_localVideoView;
@property(retain, nonatomic) UIControl *localVideoContainer; // @synthesize localVideoContainer=_localVideoContainer;
@property(retain, nonatomic) UIView *localVideoGroupView; // @synthesize localVideoGroupView=_localVideoGroupView;
@property(retain, nonatomic) UIControl *videoGroupView; // @synthesize videoGroupView=_videoGroupView;
@property(nonatomic) BOOL userWantsStatusBarShown; // @synthesize userWantsStatusBarShown=_userWantsStatusBarShown;
@property(nonatomic) BOOL alwaysVisible; // @synthesize alwaysVisible=_alwaysVisible;
@property(nonatomic) BOOL supportsAutoRotation; // @synthesize supportsAutoRotation=_supportsAutoRotation;
@property(readonly, nonatomic) BOOL contactNameIsPhoneNumber; // @synthesize contactNameIsPhoneNumber=_contactNameIsPhoneNumber;
@property(retain, nonatomic) UIImage *contactImage; // @synthesize contactImage=_contactImage;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(nonatomic) id <CNFDisplayControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IMAVChat *currentChat; // @synthesize currentChat=_currentChat;
- (void)fakeVideoDegradedNotification;
- (void)fakeNoRemotePacketsNotification;
- (void)_avVideoStalledDidChange:(id)arg1;
- (void)_avVideoQualityDidChange:(id)arg1;
- (void)_avRemotePauseDidChange:(id)arg1;
- (void)_avRemoteScreenDidChange:(id)arg1;
- (void)_avRemoteVideoDidChange:(id)arg1;
- (void)_avFirstRemoteFrameArrived:(id)arg1;
- (void)_avFirstPreviewFrameArrived:(id)arg1;
- (BOOL)isShowingTopBar;
- (BOOL)isShowingFailureUI;
- (BOOL)isShowingCallWaiting;
- (BOOL)isShowingLock;
- (BOOL)isShowingFaceTimeUI;
- (void)animateShowUnlocked;
- (void)didFinishLocking;
- (void)showLockedAnimated:(BOOL)arg1 contactImage:(id)arg2 lockScreenImageView:(id)arg3 withCompletion:(id)arg4;
- (void)toggleLocalCameraType;
- (void)showRemoteViewAsReconnecting:(BOOL)arg1;
- (void)showRemoteViewAsDegraded:(BOOL)arg1;
- (void)showRemoteViewAsPaused:(BOOL)arg1;
- (void)showLocalViewAsMuted:(BOOL)arg1;
- (id)_viewWithActivityIndicatorAndTitle:(id)arg1 bounds:(struct CGRect)arg2 center:(struct CGPoint)arg3;
- (id)_viewWithTitle:(id)arg1 message:(id)arg2 bounds:(struct CGRect)arg3 center:(struct CGPoint)arg4;
- (id)_viewWithCenteredImage:(id)arg1 title:(id)arg2 bounds:(struct CGRect)arg3 center:(struct CGPoint)arg4;
- (void)_ensureRemoteVideoOverlayViewExistsForDegradedView;
- (void)_ensureRemoteVideoOverlayViewExistsForPausedView;
- (void)_ensureRemoteVideoOverlayViewExists;
- (void)_ensureLocalVideoOverlayViewExists;
- (void)setAudioDevicesButtonSelected:(BOOL)arg1;
- (void)setMuteButtonSelected:(BOOL)arg1;
- (void)resumeFromCallWaitingAnimated:(BOOL)arg1;
- (void)prepareForCallWaitingAnimated:(BOOL)arg1;
- (void)resetToFullScreenPreview;
- (void)returnToFullScreenPreviewWithAnimations:(id)arg1 completion:(void)arg2;
- (void)returnToFullScreenPreviewWithDuration:(double)arg1 animations:(id)arg2 completion:(void)arg3;
- (void)animateOutWithAnimations:(id)arg1 completion:(void)arg2;
- (BOOL)shouldPerformCleanupCompletion;
- (void)hideInCallUIWithDuration:(double)arg1 animations:(id)arg2 completion:(void)arg3;
- (void)returnToInCallUIWithDuration:(double)arg1 animations:(id)arg2 completion:(void)arg3;
- (void)stopPreview;
- (void)startPreview;
- (void)updateViewControllerForOrientation:(int)arg1;
- (void)didReceiveMemoryWarning;
- (void)_applicationResumed:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)updateAudioButton:(BOOL)arg1;
- (void)_callFailureRecoveryCancelAction:(id)arg1;
- (void)_callFailureRecoveryTryAgainAction:(id)arg1;
- (void)_resetDisplayControllerForNewFaceTimeCall;
- (void)hudButtonTapped:(int)arg1;
- (void)handleThreeFingerPress:(id)arg1;
- (void)resetStatsHUDTimer;
- (void)setupStatsHUDTimer;
- (void)_updateStatsHUD;
- (void)_createStatsHUD;
- (void)_flipRemoteCameraViewToCameraType:(unsigned int)arg1 animated:(BOOL)arg2 withCompletion:(id)arg3;
- (void)_flipLocalCameraViewToCameraType:(unsigned int)arg1 animated:(BOOL)arg2 withCompletion:(id)arg3;
- (void)updateCallBarStatusAndNameAnimated:(BOOL)arg1;
- (void)updateContactInfoForOriginationURL:(id)arg1;
- (void)setStatusForState:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setStatus:(int)arg1 animated:(BOOL)arg2;
- (void)updateStatusAnimated:(BOOL)arg1;
- (BOOL)shouldHideStatusBar;
- (void)_teardownVideoLayers;
- (void)_setupVideoLayers;
- (void)_ensureVideoLayersExist;
- (void)changeToFullConferenceDisplayAnimated:(BOOL)arg1;
- (BOOL)shouldBeInFullConferenceDisplay;
- (BOOL)isShowingFullConferenceDisplay;
- (void)_syncSublayerFrameSizeToParent:(id)arg1 withDuration:(double)arg2;
- (void)showRemoteHangUp;
- (void)showLocalHangup;
- (void)showCallFailedWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)showLocationErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showDateAndTimeErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showNetworkErrorAlertWithTitle:(id)arg1 message:(id)arg2 supportsWLAN:(BOOL)arg3;
- (void)showWifiErrorAlertWithTitle:(id)arg1 message:(id)arg2 supportsWLAN:(BOOL)arg3;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2 alternateButton:(id)arg3 alternateButtonURL:(id)arg4;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2 alternateButton:(id)arg3 alternateButtonURL:(id)arg4 otherButton:(id)arg5 otherButtonURL:(id)arg6;
- (void)showErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)postUserNotificationWithTitle:(id)arg1 message:(id)arg2;
- (void)_animateFromVoiceControlWithName:(id)arg1 andSubtitle:(id)arg2;
- (void)_showErrorUIWithStatus:(id)arg1 showDoubleBottomBar:(BOOL)arg2 animateOut:(BOOL)arg3;
- (BOOL)_isShowingHudView:(id)arg1;
- (BOOL)_isShowingCallBar:(id)arg1;
- (void)_stopStatusLabelTimer;
- (void)_startStatusLabelTimer;
- (void)_updateStatusLabel;
- (id)_defaultStringForEndedReason:(unsigned int)arg1 error:(int)arg2;
- (void)_endFaceTimeDisplayAnimationOnCallBar;
- (void)_delayedEndFaceTimeDisplayAnimationOnCallBar;
- (void)_endFaceTimeDisplayAnimation;
- (void)_deselectEndVideoButtonOnCallBar;
- (void)_selectEndVideoButtonOnCallBar;
- (void)_deselectEndVideoButton;
- (void)_selectEndVideoButton;
- (void)_endCallBarDisplayAnimation;
- (void)_didFinishAnimatingEndCall;
- (void)_teardownHUDView;
- (void)_setupHUDView;
- (void)_animateEndCallUIForCallBars;
- (void)_disableBottomBarButtonAndAnimateOutCallBars;
- (void)_updateStatusAndAnimateOutCallBars;
- (void)refreshBottomBarButton;
- (void)showAcceptCallBarsAnimated:(BOOL)arg1 callBarsOffscreen:(BOOL)arg2 wasLocked:(BOOL)arg3 wasCallWaiting:(BOOL)arg4;
- (void)showCallBarsAnimated:(BOOL)arg1;
- (void)_hideExistingUI;
- (void)_removeErrorAlert;
- (void)_removeOverlayViews;
- (void)_showHUDView;
- (void)_hideHUDView;
- (void)_moveCallBarsOffscreen;
- (struct CGAffineTransform)_offscreenTransformForView:(id)arg1 withLocationType:(int)arg2;
- (void)_teardownCallBars;
- (void)_setupCallBars;
- (struct CGPoint)_hudViewCenterForHUDView:(id)arg1 style:(int)arg2 inView:(id)arg3;
- (void)_dissociateVideoLayers;
- (void)_dissociateRemoteVideoLayersForParticipant:(id)arg1;
- (void)associateRemoteVideoLayers;
- (void)associateLocalVideoLayers;
- (void)_endVideoAction:(id)arg1;
- (BOOL)_isOutgoingInvitation;
- (BOOL)_isInPhoneCall;
- (BOOL)_useLargeTextAndIcons;
- (BOOL)_showsCallWaitingButtonsInTopBar;
- (BOOL)_useFloatingHUD;
- (BOOL)_shouldChangeStatusBar;
- (BOOL)_showsFullFaceTimeUI;
- (BOOL)shouldDisableEdgeClip;
@property(readonly, nonatomic) IMAVChatParticipant *remoteParticipant;
- (void)setupDisplayControllerForIMAVChat:(id)arg1;
- (void)prepareForIncomingFaceTime;
- (id)flipCameraString;
- (id)endVideoString;
- (id)hideAudioRouteString;
- (id)audioRouteString;
- (id)muteString;
- (id)flipCameraImage;
- (id)endVideoImage;
- (id)audioRouteImage;
- (id)muteImage;
- (BOOL)useTwoButtonHUD;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 options:(unsigned int)arg2;
- (void)reloadRouteList;
- (void)_reloadRouteList;
- (void)hideAudioRoutingDeviceList;
- (void)showAudioRoutingDeviceList;
- (void)resetAutodismissTimer;
- (void)setupAutodismissRoutingTimer;
- (void)_setupAutodismissRoutingTimer:(float)arg1;
- (void)_autodismissAudioMenu:(id)arg1;
- (void)_resetPIPToFullScreen;
- (void)_adjustPIPBoundsForCurrentOrientationAnimated:(BOOL)arg1;
- (struct CGRect)_cornerLocationsRectForOrientation:(int)arg1;
- (id)_pipImageForOrientation:(int)arg1;
- (struct CGRect)_pipBorderBoundsForPIPSize:(struct CGSize)arg1;
- (struct CGSize)_pipSizeForAspectRatio:(struct CGSize)arg1;
- (void)_ensureLocalVideoWillBecomeVisible;
- (void)_autoFadeInLocalVideo;
- (void)_fadeInLocalVideo;
- (unsigned int)_flipAnimationOptionsForOrientation:(int)arg1;
- (void)_updateLocalVideoOrientationAnimated:(BOOL)arg1;
- (void)_adjustForOrientationAnimated:(BOOL)arg1;
- (void)_adjustForOrientationAnimated:(BOOL)arg1 completion:(id)arg2;
- (struct CGRect)_boundsForRemoteVideoInLocalOrientation:(int)arg1;
- (BOOL)_fillRemoteVideoOnScreenWithLocalOrientation:(int)arg1 remoteAspectRatio:(struct CGSize)arg2;
- (struct CGSize)_normalizedScreenSizeForOrientation:(int)arg1;
- (void)_adjustHUDViewForOrientation:(int)arg1;
- (void)_adjustCallBarsForOrientation:(int)arg1;
- (BOOL)_isValidFaceTimeOrientation:(int)arg1;
- (float)_angleForLocalOrientation:(int)arg1 remoteOrientation:(int)arg2;
- (int)_deviceOrientationForIMAVCameraOrientation:(unsigned int)arg1;
- (unsigned int)_imAVCameraOrientationForDeviceOrientation:(int)arg1;
- (void)_applyAutoRotationCorrectionForOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_deviceOrientationDidChange:(id)arg1;
- (void)_removeDeviceOrientationChangeObserver;
- (void)_addDeviceOrientationChangeObserver;
- (void)handleSingleTapToRevealStatusBar:(id)arg1;
- (void)_addStatusBarSingleTapGestureRecognizer;
- (void)_refreshStatusBarAndPIPAnimated:(BOOL)arg1;
- (BOOL)shouldShowStatusBar;
- (BOOL)_currentUIRequiresStatusBar;
- (BOOL)_currentlyInFaceTime;
- (BOOL)_currentOrientationSupportsStatusBar;

@end

