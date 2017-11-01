//
//  main.m
//  41-数字翻转
//
//  Created by 黄启明 on 2017/9/21.
//  Copyright © 2017年 Himin. All rights reserved.
//

#import <Foundation/Foundation.h>

void reversrNumber(int n) {
    int res = 0;
    int x = 0;
    while (n) {
        x = n % 10;
        res = res * 10 + x;
        n = n / 10;
    }
    printf("%d\n",res);
}

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        reversrNumber(-123124234);
//        int a = 1234242;
//        int y = 0;
//        int m = 0;
//        while (a) {
//            m = a % 10;
//            y = y * 10 + m;
//            a = a / 10;
//        }
//
//        NSLog(@"%d",y);
    }
    return 0;
}
