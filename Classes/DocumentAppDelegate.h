//
//  DocumentAppDelegate.h
//  Document
//
//  Created by Matheus Brum on 27/10/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DocumentViewController;

@interface DocumentAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    DocumentViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet DocumentViewController *viewController;

@end

