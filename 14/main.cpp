//
//  main.cpp
//  14
//
//  Created by 黄启明 on 2017/9/9.
//  Copyright © 2017年 Himin. All rights reserved.
//

//求一个数的相反数

#include <iostream>
#include <vector>
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
    
//    cout << "len = " << len << endl;
//    
//    for (int i = 0; i < len; i++) {
//        cout << arr[i] << endl;
//    }
    
    for (int i = 0; i < len; i++) {
        b += arr[i] * pow(10, len-i-1);
    }
    
    return b;
}

int main(int argc, const char * argv[]) {
    int a;
    cin >> a;
    
    cout << a+getReverseNumber(a);
    return 0;
}
