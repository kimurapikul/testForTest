//
//  ftFlipsideViewController.m
//  flipTest
//
//  Created by pikul_mac on 2013/10/04.
//  Copyright (c) 2013年 Pikul Inc. All rights reserved.
//

#import "ftFlipsideViewController.h"

@interface ftFlipsideViewController ()

@end

@implementation ftFlipsideViewController

- (void)awakeFromNib
{
    [super awakeFromNib];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Actions

- (IBAction)done:(id)sender
{
    [self.delegate flipsideViewControllerDidFinish:self];
}

@end
