//
// AirPlayNative.h
// AirPlay Button Cordova Plugin
//

# import <Cordova/CDVPlugin.h>

# import <MediaPlayer/MediaPlayer.h>

@interface AirPlayNative : CDVPlugin <UITabBarDelegate> {
  NSString* callbackId;
  UIView* mpVolumeViewParentView;
  MPVolumeView* myVolumeView;
}

@property (nonatomic, copy) NSString* callbackId;
@property (nonatomic, retain) UIView* mpVolumeViewParentView;
@property (nonatomic, retain) MPVolumeView* myVolumeView;
@property (nonatomic, readonly, getter=areWirelessRoutesAvailable) BOOL wirelessRoutesAvailable;
@property (nonatomic, readonly, getter=isWirelessRouteActive) BOOL wirelessRouteActive;

 - (void)createAirPlayButton:(CDVInvokedUrlCommand *)command;
 - (void)showAirPlayButton:(CDVInvokedUrlCommand *)command;
 - (void)hideAirPlayButton:(CDVInvokedUrlCommand *)command;
 - (void)airplayButtonPress:(CDVInvokedUrlCommand *)command;

 @end
