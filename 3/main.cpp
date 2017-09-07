//
//  main.cpp
//  3
//
//  Created by 黄启明 on 2017/9/7.
//  Copyright © 2017年 Himin. All rights reserved.
//


//请编程实现一个整型数组的归并排序。本题会人工判断,请严格按照题目描述完成
//输入描述:
//一个无序的整型数组,输入格式见输入样例
//
//
//输出描述:
//一个有序的整型数组,输出格式见输出样例

#include <iostream>
#include <vector>

using namespace std;

void merge1(vector<int> & v, int beg, int mid, int end) {

    vector<int> tmp(end-beg+1);
    int i = beg, j = mid + 1, k = 0;
    while (i <=mid && j <= end) {
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

void mergeSort(vector<int> & v, int beg, int end) {

    if (beg >= end) {
        return;
    }
    mergeSort(v, beg, (beg+end)/2);
    mergeSort(v, (beg+end)/2+1, end);
    
    merge1(v, beg, (beg+end)/2, end);
    
}
int main(int argc, const char * argv[]) {
    
    char c;
    cin >> c;
    
    vector<int> v;
    
    int j;
    while (cin >> j >> c) {
        v.push_back(j);
    }
    
    int n = int(v.size());
    mergeSort(v, 0, n-1);
    
    for (int j = 0; j < n; j++) {
        cout << ((j == 0) ? "[" : "") << v[j] << ((j == n-1) ? "]\n" : ", ");
    }
    
    return 0;
}
