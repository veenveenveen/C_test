//
//  main.cpp
//  数位重排
//
//  Created by 黄启明 on 2017/9/25.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

bool compareTwo(vector<int> &v1, vector<int> &v2) {
    int len1 = int(v1.size());
    int len2 = int(v2.size());
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    bool flag = true;
    if (len1 != len2) {
        return false;
    }
    for (int i = 0; i < len1; i++) {
        if (v1[i] != v2[i]) {
            flag = false;
            break;
        }
    }
    return flag;
}

bool func(int x) {
    if (x % 9 != 0) {
        return false;
    }
    
    int a = x;
    int flag = false;
    vector<int> v;
    while (x) {
        int tmp = x % 10;
        x = x / 10;
        v.push_back(tmp);
    }
    
    for (int i = 2; i <= 9; i++) {
        vector<int> vv;
        int aa = a * i;
        while (aa) {
            int tmp = aa % 10;
            aa = aa / 10;
            vv.push_back(tmp);
        }
        if (compareTwo(v, vv)) {
            flag = true;
            break;
        }
    }
    return flag;
}

int main(int argc, const char * argv[]) {

//    int n;
//    cin >> n;
//    vector<int> v(n);
//    for (int i = 0; i < n; i++) {
//        cin >> v[i];
//    }
//    for (int i = 0; i < n; i++) {
//        if (func(v[i])) {
//            cout << "can" << endl;
//        }
//        else {
//            cout << "can not" << endl;
//        }
//    }
    
    for (int i = 0; i < 200000; i++) {
        if (func(i)) {
            cout << "can" << endl;
            cout << i << endl;
        }
        else {
//            cout << "can not" << endl;
        }
    }
    
    
    return 0;
}
