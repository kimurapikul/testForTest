//
//  ftFlipsideViewController.h
//  flipTest
//
//  Created by pikul_mac on 2013/10/04.
//  Copyright (c) 2013年 Pikul Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ftFlipsideViewController;

@protocol ftFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(ftFlipsideViewController *)controller;
@end

@interface ftFlipsideViewController : UIViewController

@property (weak, nonatomic) id <ftFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
