/*******************************************************************************
 Copyright (c) 2013 Koninklijke Philips N.V.
 All Rights Reserved.
 ********************************************************************************/

#define UIAppDelegate  ((PHAppDelegate *)[[UIApplication sharedApplication] delegate])


#import <UIKit/UIKit.h>

#import "PHBridgeSelectionViewController.h"
#import "PHBridgePushLinkViewController.h"
#import <HueSDK_iOS/HueSDK.h>
#import "/Users/melissa/Documents/dev/swift/HueConnectApp/HelloConnect/HelloConnectViewController.h"


@class ViewController;
@class PHHueSDK;

@interface PHAppDelegate : UIResponder <UIApplicationDelegate, UIAlertViewDelegate, PHBridgeSelectionViewControllerDelegate, PHBridgePushLinkViewControllerDelegate, HelloConnectViewControllerDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UINavigationController *navigationController;

@property (strong, nonatomic) PHHueSDK *phHueSDK;


#pragma mark - HueSDK

/**
 Starts the local heartbeat
 */
- (void)enableLocalHeartbeat;

/**
 Stops the local heartbeat
 */
- (void)disableLocalHeartbeat;

/**
 Starts a search for a bridge
 */
- (void)searchForBridgeLocal;

- (void)startBrainStuff;

@end
