//
//  main.cpp
//  11
//
//  Created by 黄启明 on 2017/9/8.
//  Copyright © 2017年 Himin. All rights reserved.
//

//一个数量为N的整数数组，其中有很多重复，其中一个数字出现次数超过N/2，请将该数字找出来。
//输入描述:
//输入包含两行:
//第一行有两个整数n(1 ≤ n ≤ 100000),表示数组数字个数n
//第二行为n个整数,范围均在32位整数,以空格分隔,保证输入数据合法
//
//
//输出描述:
//输出出现次数最多的那个数

#include <iostream>
#include <vector>

using namespace std;

int findNumber(vector<int> &v) {
    
    int len = int(v.size());
    int result = v[0];
    int numCounts = 0;
    for (int i = 0; i < len; i++) {
        if (numCounts == 0) {
            result = v[i];
            numCounts = 1;
        }
        else {
            if (result == v[i]) {
                numCounts++;
            }
            else {
                numCounts--;
            }
        }
    }
    
    return result;
}

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    cout << findNumber(v);
    return 0;
}
