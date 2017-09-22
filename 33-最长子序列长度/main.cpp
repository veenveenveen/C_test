//
//  main.cpp
//  33-最长子序列长度
//
//  Created by 黄启明 on 2017/9/17.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
//    int array[101][101];
//    
//    int n;
//    scanf("%d",&n);
//    
//    for (int i = 1; i <= n; i++) {
//        scanf("%d",&array[i][0]);
//        array[i][1] = 1;
//    }
//    
//    for (int i = 2; i <= n; i++) {
//        int len = 0;
//        for (int j = 0; j < i; j++) {
//            if (array[j][0] >= array[i][0] && array[j][1] > len) {
//                len = array[j][1];
//            }
//        }
//        if (len > 0) {
//            array[i][1] = len+1;
//        }
//    }
//    
//    printf("%d",array[n-1][1]);
    
    string str = "hello";
    cout << str << endl;
    str.replace(str.begin(), str.end(), "asdsad");
    cout << str << endl;
    
    return 0;
}
