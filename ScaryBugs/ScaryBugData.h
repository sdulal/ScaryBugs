//
//  ScaryBugData.h
//  ScaryBugs
//
//  Created by Shafqat Dulal on 7/24/15.
//
//

#import <Foundation/Foundation.h>

@interface ScaryBugData : NSObject

@property (strong) NSString *title;
@property (assign) float rating;

- (id)initWithTitle:(NSString*)title rating:(float)rating;

@end
