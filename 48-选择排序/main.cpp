//
//  main.cpp
//  48-选择排序
//
//  Created by 黄启明 on 2017/9/22.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void selectSort(vector<int> &v) {
    int len = int(v.size());
    
    int k = 0;
    for (int i = 0; i < len-1; i++) {
        k = i;
        for (int j = i+1; j < len; j++) {
            if (v[j] < v[k]) {
                k = j;
            }
        }
        if (k != i) {
            int tmp = v[i];
            v[i] = v[k];
            v[k] = tmp;
        }
        
        //30 89 43 29 43 73
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
    
    selectSort(v);
    
//    for (int i = 0; i < n; i++) {
//        cout << v[i] << " ";
//    }
//    
//    cout << endl;
    
    return 0;
}
