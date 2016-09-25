//
//  PathConstant.h
//  FMDB
//
//  Created by hairong chen on 16/9/25.
//  Copyright © 2016年 hairong chen. All rights reserved.
//
#define kDatabaseFileName       @"iTouchTv.sqlite"

static NSString *_DatabaseDirectory;

static inline NSString* DatabaseDirectory() {
    if(!_DatabaseDirectory) {
        NSString* cachesDirectory = [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) objectAtIndex:0];
        _DatabaseDirectory = [[[cachesDirectory stringByAppendingPathComponent:[[NSProcessInfo processInfo] processName]] stringByAppendingPathComponent:@"Database"] copy];
        
        NSFileManager *fileManager = [NSFileManager defaultManager];
        BOOL isDir = YES;
        BOOL isExist = [fileManager fileExistsAtPath:_DatabaseDirectory isDirectory:&isDir];
        if (!isExist)
        {
            [fileManager createDirectoryAtPath:_DatabaseDirectory withIntermediateDirectories:YES attributes:nil error:NULL];
        }
    }
    
    return _DatabaseDirectory;
}

