//
//  main.m
//  38-Block
//
//  Created by 黄启明 on 2017/9/19.
//  Copyright © 2017年 Himin. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^Blo)(void);

int main(int argc, const char * argv[]) {
    @autoreleasepool {

        
        //    int (^blk)(void) = ^int {
        ////        cout << count << endl;
        //        return 1;
        //    };
//        void (^blk)(void) = ^{
//            NSLog(@"Block...");
//        };
//        blk();
        Blo blo = ^ {
             NSLog(@"Block...");
        };
        blo();
    }
    
    return 0;
}
