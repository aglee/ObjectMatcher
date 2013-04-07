//
//  ObjectMatcher.h
//
//  Created by Andy Lee on 4/7/13.
//  Copyright (c) 2013 Andy Lee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ObjectMatcher : NSObject

+ (id)matcherWithBaseObject:(id)baseObject;

- (BOOL)matchesAnyObject:(id)firstObject, ...;

- (BOOL)matchesAnyClass:(Class)firstClass, ...;

@end
