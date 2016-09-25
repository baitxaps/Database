//
//  main.m
//  FMDB
//
//  Created by hairong chen on 16/9/25.
//  Copyright © 2016年 hairong chen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DAO.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
     [DAO createTablesNeeded];
    }
    return 0;
}
