//
//  objswitch.h
//
//  Created by Andy Lee on 4/7/13.
//  Copyright (c) 2013 Andy Lee. All rights reserved.
//

#import "ObjectMatcher.h"
#import "SelectorMatcher.h"

// Macros that let you do fake switch statements with objects as the switch/case
// values. See the README for details.

#define objswitch(x) \
{ \
ObjectMatcher *___my_matcher___ = [ObjectMatcher matcherWithBaseObject:(x)]; \
if (0) {

#define objcase(x, ...) \
} else if ([___my_matcher___ matchesAnyObject:x, ## __VA_ARGS__ , [ObjectMatcher objectMatcherSentinel]]) {

#define objkind(y, ...) \
} else if ([___my_matcher___ matchesAnyClass:[y class], ## __VA_ARGS__ , [ObjectMatcher objectMatcherSentinel]]) {

#define defaultcase \
} else {

#define endswitch \
} \
}


// Variation that lets you use blocks.

#define oswitch(x) { ObjectMatcher *___my_matcher___ = [ObjectMatcher matcherWithBaseObject:(x)]; if (0) { ^{}
#define ocase(x, ...) (); } else if ([___my_matcher___ matchesAnyObject:x, ## __VA_ARGS__ , [ObjectMatcher objectMatcherSentinel]]) {
#define okind(y, ...) (); } else if ([___my_matcher___ matchesAnyClass:[y class], ## __VA_ARGS__ , [ObjectMatcher objectMatcherSentinel]]) {
#define odefault (); } else {
#define oend (); } }


// Variation that lets you do similar fake switch statements with selectors.

#define selswitch(x) \
{ \
SelectorMatcher *___my_matcher___ = [SelectorMatcher matcherWithBaseSelector:(@selector(x))]; \
if (0) {

#define selcase(x, ...) \
} else if ([___my_matcher___ matchesAnySelector:x, ## __VA_ARGS__ , [SelectorMatcher selectorMatcherSentinel]]) {

