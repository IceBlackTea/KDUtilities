//
//  BBAppDelegate+UserDefault.h
//  BuddyBook
//
//  Created by Blankwonder on 8/18/13.
//  Copyright (c) 2013 Suixing Tech. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface KDUserDefault : NSObject

+ (instancetype)sharedDefault;

- (BOOL)synchronize;

@end
