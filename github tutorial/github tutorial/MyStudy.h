//
//  MyStudy.h
//  github tutorial
//
//  Created by Toshimi Ataku on 17/10/3.
//  Copyright © 2017 Toshimi Ataku. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>

@interface MyStudy : NSObject

@property (weak) IBOutlet NSTextField *inputValue;
- (IBAction)doAction:(id)sender;
- (IBAction)tick:(id)sender;

@end
