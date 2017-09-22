//
//  main.m
//  41-数字翻转
//
//  Created by 黄启明 on 2017/9/21.
//  Copyright © 2017年 Himin. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {

        int a = 1234242;
        int y = 0;
        int m = 0;
        while (a) {
            m = a % 10;
            y = y * 10 + m;
            a = a / 10;
        }
        
        NSLog(@"%d",y);
    }
    return 0;
}
