//
//  main.cpp
//  45-直接插入排序
//
//  Created by 黄启明 on 2017/9/22.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void insertSort(vector<int> &v) {
    int len = int(v.size());
    for (int i = 1; i < len; i++) {
        int tmp = v[i];
        int j = i-1;
        while (j >= 0 && tmp < v[j]) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = tmp;
        for (int i = 0; i < len; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}

int main(int argc, const char * argv[]) {

    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    insertSort(v);
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}
