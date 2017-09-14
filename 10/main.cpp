//
//  main.cpp
//  10
//
//  Created by 黄启明 on 2017/9/8.
//  Copyright © 2017年 Himin. All rights reserved.
//

//读入一个有n个数的递增整形数组，并给出一个和值sum，判断是否存在两个数字使得它们的和为sum
//
//输入描述:
//输入数据包括两行:
//第一行两个整数n(1 ≤ n ≤ 10 ^ 5),sum(1 ≤ sum ≤ 10 ^ 9)
//第二行n个整数,范围均在32位整数内,以空格分隔
//
//
//输出描述:
//如果找到和值为某值的两个数，输出两个数字的下标(数组下标从0开始),如果有多解,输出第一个数下标最小的那个解;否则输出false

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int n,sum;
    cin >> n >> sum;
    
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int left = 0, right = n-1;
    bool res = false;
    while (left < right) {
        if (v[left] + v[right] == sum) {
            cout << left << " " << right << endl;
            res = true;
            break;
        }
        if (v[left] + v[right] > sum) {
            right--;
        }
        else if (v[left] + v[right] < sum) {
            left++;
        }
    }
    
    if (!res) {
        cout << "false" << endl;
    }
    
    return 0;
}
