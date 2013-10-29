//
//  SenTestCase+Async.h
//
//  Created by Saül Baró on 10/29/13.
//  Copyright (c) 2013 Mobile Jazz. All rights reserved.
//

#import <SenTestingKit/SenTestingKit.h>

#define ASYNC_TEST_START    __block BOOL hasCalledBack = NO;
#define ASYNC_TEST_DONE     hasCalledBack = YES;
#define ASYNC_TEST_END      NSDate *loopUntil = [NSDate dateWithTimeIntervalSinceNow:10]; \
                            while (hasCalledBack == NO && [loopUntil timeIntervalSinceNow] > 0) { \
                                [[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:loopUntil]; \
                            } \
                            if (!hasCalledBack) { STFail(@"Timeout"); }

#define ASYNC_TEST_END_LONG_TIMEOUT \
                            NSDate *loopUntil = [NSDate dateWithTimeIntervalSinceNow:120]; \
                            while (hasCalledBack == NO && [loopUntil timeIntervalSinceNow] > 0) { \
                                [[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:loopUntil]; \
                            } \
                            if (!hasCalledBack) { STFail(@"Timeout"); }

@interface SenTestCase (Async)

@end
