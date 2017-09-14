//
//  main.cpp
//  20-选择排序
//
//  Created by 黄启明 on 2017/9/12.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void selectSort(vector<int> &v) {
    int len = int(v.size());
    int i,j,k;
    for (i = 0; i < len-1; i++) {
        k = i;
        for (j = i+1; j < len; j++) {
            if (v[j] < v[k]) {
                k = j;
            }
        }
        if (k != i) {
            swap(v[k], v[i]);
        }
    }
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
    
    selectSort(v);
    
    printVector(v);

    return 0;
}
