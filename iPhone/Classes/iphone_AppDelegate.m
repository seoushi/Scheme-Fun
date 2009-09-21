//
//  iphone_AppDelegate.m
//  iphone
//
//  Created by Wei-Ju Wu on 7/25/09.
//  Copyright Box of Rats LLC 2009. All rights reserved.
//

#import "iphone_AppDelegate.h"
#import "EAGLView.h"

@implementation iphone_AppDelegate

@synthesize window;
@synthesize glView;

- (void)applicationDidFinishLaunching:(UIApplication *)application
{    
	glView.animationInterval = 1.0 / 60.0;
	[glView startAnimation];
}


- (void)applicationWillResignActive:(UIApplication *)application {
	glView.animationInterval = 1.0 / 5.0;
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
	glView.animationInterval = 1.0 / 60.0;
}


- (void)dealloc {
	[window release];
	[glView release];
	[super dealloc];
}

@end
