//
//  ftAppDelegate.h
//  flipTest
//
//  Created by pikul_mac on 2013/10/04.
//  Copyright (c) 2013年 Pikul Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ftAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
