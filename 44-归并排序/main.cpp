//
//  main.cpp
//  44-归并排序
//
//  Created by 黄启明 on 2017/9/21.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void mergeTwo(vector<int> &v, int beg, int mid, int end) {
    vector<int> tmp(end-beg+1);
    int i = beg, j = mid+1, k = 0;
    while (i <= mid && j <= end) {
        if (v[i] <= v[j]) {
            tmp[k++] = v[i++];
        }
        else {
            tmp[k++] = v[j++];
        }
    }
    while (i <= mid) {
        tmp[k++] = v[i++];
    }
    while (j <= end) {
        tmp[k++] = v[j++];
    }
    i = beg;
    k = 0;
    while (k < tmp.size()) {
        v[i++] = tmp[k++];
    }
}

void mergeSort(vector<int> &v, int beg, int end) {
    if (beg >= end) {
        return;
    }
    mergeSort(v, beg, (beg+end)/2);
    mergeSort(v, (beg+end)/2+1, end);
    mergeTwo(v, beg, (beg+end)/2, end);
}

int main(int argc, const char * argv[]) {

    int n;
    cin >> n;
    
    vector<int> v(n);
    //23 4 145 56 34 21 9
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    mergeSort(v, 0, n-1);
    
    for (int j = 0; j < n; j++) {
        cout << v[j] << " ";
    }

    return 0;
}
