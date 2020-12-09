//
//  AppDelegate.h
//  ZMPlayer
//
//  Created by 大爱金孝 on 2020/12/9.
//  Copyright © 2020 zhuimar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

