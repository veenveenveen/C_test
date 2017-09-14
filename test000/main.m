//
//  main.m
//  test000
//
//  Created by 黄启明 on 2017/9/7.
//  Copyright © 2017年 Himin. All rights reserved.
//

#import <Foundation/Foundation.h>

int longestPalindromicString(char *str) {
    int length = sizeof(str) / sizeof(char);
    int i = 0;
    int j = length - 1;
    int count = 0;
    while (i < j) {
        if (str[i] == str[j]) {
            i++;
            j--;
        }
        else {
            count++;
            i = 0;
            j = length - count;
        }
    }
    if (i == j) {
        return 2*i+1;
    }
    if (i > j) {
        return 2*i;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
//    char *str = malloc(INT_MAX);
//    scanf("%s",str);
//    printf("%d",longestPalindromicString(str));
//    free(str);
    
    int a = 240, b = 313;
    int x;
    
    
    
    return 0;
}


