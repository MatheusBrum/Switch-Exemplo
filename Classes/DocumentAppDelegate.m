//
//  DocumentAppDelegate.m
//  Document
//
//  Created by Matheus Brum on 27/10/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import "DocumentAppDelegate.h"
#import "DocumentViewController.h"

@implementation DocumentAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
