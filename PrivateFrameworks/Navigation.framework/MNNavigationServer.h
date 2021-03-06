/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationServer : NSObject <MNNavigationServiceClientInterface, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    <MNNavigationServiceDaemonInterface> * _localProxy;
    NSMapTable * _peers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *peers;
@property (readonly) Class superclass;

+ (id)sharedServer;

- (void).cxx_destruct;
- (void)_clearConnectionForService:(id)arg1;
- (id)_newPeerForConnection:(id)arg1;
- (id)_remoteObjectForService:(id)arg1;
- (void)dealloc;
- (void)didActivateAudioSession:(bool)arg1;
- (void)didArrive;
- (void)didCancelReroute;
- (void)didChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)didChangeGuidanceLevel:(int)arg1;
- (void)didChangeGuidanceState:(id)arg1;
- (void)didChangeNavigationState:(int)arg1;
- (void)didEnableGuidancePrompts:(bool)arg1;
- (void)didFailWithError:(id)arg1;
- (void)didInvalidateTrafficIncidentAlert:(id)arg1;
- (void)didReceiveTrafficIncidentAlert:(id)arg1;
- (void)didRerouteWithDetails:(id)arg1 withLocationDetails:(id)arg2;
- (void)didSignalAlightForStepAtIndex:(unsigned long long)arg1;
- (void)didStartSpeakingPrompt:(id)arg1;
- (void)didStartUsingVoiceLanguage:(id)arg1;
- (void)didSwitchToNewTransportType:(int)arg1 newRoute:(id)arg2;
- (void)didUpdateActiveRouteDetails:(id)arg1;
- (void)didUpdateAudioOutputCurrentSetting:(id)arg1;
- (void)didUpdateAudioOutputCurrentSettingForVoicePrompt:(id)arg1;
- (void)didUpdateAudioOutputRouteSelection:(unsigned long long)arg1;
- (void)didUpdateAudioOutputSettings:(id)arg1;
- (void)didUpdateDistanceUntilManeuver:(double)arg1 timeUntilManeuver:(double)arg2 forStepIndex:(unsigned long long)arg3;
- (void)didUpdateDistanceUntilSign:(double)arg1 timeUntilSign:(double)arg2 forStepIndex:(unsigned long long)arg3;
- (void)didUpdateFeedback:(id)arg1 forAlightingStepAtIndex:(unsigned long long)arg2;
- (void)didUpdateHeading:(double)arg1 accuracy:(double)arg2;
- (void)didUpdateMatchedLocation:(id)arg1;
- (void)didUpdateProceedToRouteDistance:(double)arg1 displayString:(id)arg2 closestStepIndex:(unsigned long long)arg3;
- (void)didUpdateRemainingTime:(double)arg1 remainingDistance:(double)arg2;
- (void)didUpdateStepIndex:(unsigned long long)arg1 legIndex:(unsigned long long)arg2;
- (void)didUpdateTracePlaybackDetails:(id)arg1;
- (void)didUpdateTrafficForETARoute:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 withRouteDetails:(id)arg4;
- (void)didUpdateTrafficIncidentAlert:(id)arg1;
- (void)displayManeuverAlertForAnnouncementStage:(unsigned long long)arg1;
- (void)displayPrimaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5 maneuverStepIndex:(unsigned long long)arg6 isSynthetic:(bool)arg7;
- (void)displaySecondaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5;
- (void)failedRerouteWithErrorCode:(long long)arg1;
- (void)hideSecondaryStep;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)peers;
- (void)willChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)willPauseNavigation;
- (void)willReroute;
- (void)willResumeFromPauseNavigation;

@end
