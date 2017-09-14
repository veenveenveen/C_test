//
//  main.cpp
//  21-冒泡排序
//
//  Created by 黄启明 on 2017/9/12.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &v) {
    int n = int(v.size());
    for (int i = 0; i < n; i++) {
        cout << v[i] << ((i == n-1) ? "" : " ");
    }
}

void bubbleSort(vector<int> &v) {
    int len = int(v.size());
    int i,j;
    bool flag;
    for (i = 0; i < len-1; i++) {
        flag = false;
        for (j = 0; j < len-i-1; j++) {
            if (v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
                flag = true;
            }
        }
        if (!flag) {
            break;
        }
//        printVector(v);
//        cout << endl;
    }
}

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    bubbleSort(v);
    
    printVector(v);
    
    return 0;
}
