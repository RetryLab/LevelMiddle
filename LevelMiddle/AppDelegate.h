//
//  AppDelegate.h
//  LevelMiddle
//
//  Created by shuo on 13-11-3.
//  Copyright (c) 2013年 胡 文硕. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property NSString *dbpath;

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSTabView *mainTabView;
@property (weak) IBOutlet NSDictionaryController *dictController;


-(IBAction)chooseDBPath:(id)sender;
@end
