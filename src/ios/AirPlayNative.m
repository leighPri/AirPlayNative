//
// AirPlayNative.m
// AirPlay Button Cordova Plugin
//

#import "AirPlayNative.h"
#import <MediaPlayer/MediaPlayer.h>

@implementation AirPlayNative

@synthesize mpVolumeViewParentView, myVolumeView;

#ifndef __IPHONE_3_0
@synthesize webView;
#endif

#pragma mark -
#pragma mark AirPlayNative

- (void)airplayInit:(CDVInvokedUrlCommand *)command
{
    if (self.mpVolumeViewParentView != NULL) {
        return;
    }
    
    self.mpVolumeViewParentView = [[UIView alloc] initWithFrame:CGRectZero];
    
    [self.webView.superview addSubview:mpVolumeViewParentView];
    self.myVolumeView = [[MPVolumeView alloc] initWithFrame: mpVolumeViewParentView.bounds];

    [mpVolumeViewParentView addSubview: myVolumeView];
    self.myVolumeView.showsVolumeSlider = NO;
    self.myVolumeView.showsRouteButton = NO;
}

- (void)airplayButtonPress:(CDVInvokedUrlCommand *)command
{
    for (UIButton *button in myVolumeView.subviews)
    {
        if ([button isKindOfClass:[UIButton class]])
        {
            [button sendActionsForControlEvents:UIControlEventTouchUpInside];
        }
    }
}

@end
