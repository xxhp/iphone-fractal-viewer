//
//  FractalViewerAppDelegate.h
//  FractalViewer
//
//  Created by Hamamoto Noriaki on 09/09/25.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

@interface FractalViewerAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

