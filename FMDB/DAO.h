//
//  DAO.h
//  FMDB
//
//  Created by hairong chen on 16/9/25.
//  Copyright © 2016年 hairong chen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FMDatabase.h"
#import "FMDatabaseAdditions.h"
#import "FMDatabaseQueue.h"

@interface DAO : NSObject {
    
@protected
 FMDatabaseQueue	*_databaseQueue;
}

@end


@interface DAO()

@property (nonatomic,strong) FMDatabaseQueue *databaseQueue;

+ (void)createTablesNeeded;

@end
