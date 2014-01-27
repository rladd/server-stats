//
//  elementAppDelegate.h
//  Server Stats
//
//  Created by Ross on 1/27/2014.
//  Copyright (c) 2014 Element63. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface elementAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
