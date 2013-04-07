//
//  objswitch.h
//
//  Created by Andy Lee on 4/7/13.
//  Copyright (c) 2013 Andy Lee. All rights reserved.
//

#import "ObjectMatcher.h"
#import "SelectorMatcher.h"

#define objswitch(x) \
{ \
ObjectMatcher *___my_matcher___ = [ObjectMatcher matcherWithBaseObject:(x)]; \
if (0) {

#define objcase(x, ...) \
} else if ([___my_matcher___ matchesAnyObject:x, ## __VA_ARGS__ , nil]) {

#define objkind(y, ...) \
} else if ([___my_matcher___ matchesAnyClass:[y class], ## __VA_ARGS__ , nil]) {

#define defaultcase \
} else {

#define endswitch \
} \
}

#define selswitch(x) \
{ \
SelectorMatcher *___my_matcher___ = [SelectorMatcher matcherWithBaseSelector:(@selector(x))]; \
if (0) {

#define selcase(x, ...) \
} else if ([___my_matcher___ matchesAnySelector:x, ## __VA_ARGS__ , nil]) {

