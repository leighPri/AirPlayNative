//
// AirPlayNative.h
// AirPlay Button Cordova Plugin
//

# import <Cordova/CDVPlugin.h>

# import <MediaPlayer/MediaPlayer.h>

@interface AirPlayNative : CDVPlugin <UITabBarDelegate> {
  NSSTRING* callbackId;
  UIView* mpVolumeViewParentView;
  MPVolumeView* myVolumeView;
}

@property (nonatomic, copy) NSSTRING* callbackId;
@property (nonatomic, retain) UIView* mpVolumeViewParentView;
@property (nonatomic, retain) MPVolumeView* myVolumeView;
@property (nonatomic, readonly, getter=areWirelessRoutesAvailable) BOOL wirelessRoutesAvailable;
@property (nonatomic, readonly, getter=isWirelessRouteActive) BOOL wirelessRouteActive;

 - (void)createAirPlayButton:(CDVInvokedUrlCommand *)command;
 - (void)showAirPlayButton:(CDVInvokedUrlCommand *)command;
 - (void)hideAirPlayButton:(CDVInvokedUrlCommand *)command;

 @end
