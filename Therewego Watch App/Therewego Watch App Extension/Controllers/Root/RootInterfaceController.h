//
//  InterfaceController.h
//  watchapp Extension
//
//  Created by Dmitry Gutsulyak on 7/22/15.
//  Copyright © 2015 SHAPE GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WatchKit/WatchKit.h>
#import "TWGPlaceCollection.h"
#import "TWGDataProvider.h"

@interface RootInterfaceController : WKInterfaceController <CLLocationManagerDelegate>

@property (strong, nonatomic) CLLocationManager *locationManager;

@property BOOL isRequestingLocation;

@property NSString* requestLocationTitle;

@property NSString* fetchingPlacesTitle;

@property NSString* deniedText;

@property NSString* unexpectedText;

@property (unsafe_unretained, nonatomic) IBOutlet WKInterfaceButton *gpsButton;

@property (unsafe_unretained, nonatomic) IBOutlet WKInterfaceButton *detailsButton;

@property (unsafe_unretained, nonatomic) IBOutlet WKInterfaceLabel *errorLabel;

@property (unsafe_unretained, nonatomic) IBOutlet WKInterfaceMap *map;

- (void)hideErrorAfter:(double)seconds;

- (void)showErrorWith:(NSString *)text;

- (IBAction)didTapButton;

@end
