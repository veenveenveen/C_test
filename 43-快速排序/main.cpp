//
//  main.cpp
//  43-快速排序
//
//  Created by 黄启明 on 2017/9/21.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int partion(vector<int> &v, int low, int high) {
    
    int key = v[low];
    while (low < high) {
        while (low < high && v[high] >= key) {
            high--;
        }
        v[low] = v[high];
        while (low < high && v[low] <= key ) {
            low++;
        }
        v[high] = v[low];
    }
    v[low] = key;
    
    return low;
}

void qSort(vector<int> &v, int low, int high) {
    if (low < high) {
        int index = partion(v, low, high);
        qSort(v, low, index-1);
        qSort(v, index+1, high);
    }
}

int main(int argc, const char * argv[]) {

    int n = 0;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    qSort(v, 0, n-1);
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    
    return 0;
}
