//
//  main.cpp
//  整数翻转
//
//  Created by 黄启明 on 2017/9/19.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int getReverseNumber(int a) {
    int b = 0;
    int tmp = 0;
    int arr[100] = {0};
    int len = 0;
    bool falg = false;
    while (a > 0) {
        tmp = a % 10;
        if (tmp != 0) {
            falg = true;
        }
        if (falg) {
            //            cout << tmp;
            arr[len] = tmp;
            len++;
        }
        a = a / 10;
    }
    
    for (int i = 0; i < len; i++) {
        b += arr[i] * pow(10, len-i-1);
    }
    
    return b;
}

int main(int argc, const char * argv[]) {
    
    int num;
    cin >> num;
    
    unsigned int u_num;
    bool flag = true;
    if (num < 0) {
        flag = false;
        u_num = -num;
    }
    else {
        u_num = num;
    }
    
    unsigned int res = getReverseNumber(u_num);
    
    if (!flag) {
        num = -res;
    }
    else {
        num = res;
    }
    
    std::cout << num;
    return 0;
}
