//
//  oslohouseFlipsideViewController.h
//  eyechecker
//
//  Created by Anuj Patel on 7/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class oslohouseFlipsideViewController;

@protocol oslohouseFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(oslohouseFlipsideViewController *)controller;
@end

@interface oslohouseFlipsideViewController : UIViewController

@property (weak, nonatomic) IBOutlet id <oslohouseFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
