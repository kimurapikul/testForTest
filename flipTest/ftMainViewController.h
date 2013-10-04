//
//  ftMainViewController.h
//  flipTest
//
//  Created by pikul_mac on 2013/10/04.
//  Copyright (c) 2013年 Pikul Inc. All rights reserved.
//

#import "ftFlipsideViewController.h"

#import <CoreData/CoreData.h>

@interface ftMainViewController : UIViewController <ftFlipsideViewControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
