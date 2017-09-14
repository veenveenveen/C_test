//
//  main.cpp
//  19
//
//  Created by 黄启明 on 2017/9/12.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sortRule(int a, int b) {
//    return a < b;//升序排序
    return a > b;//降序排序
}

void printVector(vector<int> &v) {
    int n = int(v.size());
    for (int i = 0; i < n; i++) {
        cout << v[i] << ((i == n-1) ? "" : " ");
    }
}

int main(int argc, const char * argv[]) {

    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end(), sortRule);
    
    printVector(v);
    
    return 0;
}
