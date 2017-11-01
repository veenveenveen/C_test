//
//  main.cpp
//  46-冒泡排序
//
//  Created by 黄启明 on 2017/9/22.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &v) {
    int len = int(v.size());
    for (int i = 0; i < len; i++) {
        bool flag = true;
        for (int j = len-1; j > i; j--) {
            if (v[j] < v[j-1]) {
                int tmp = v[j];
                v[j] = v[j-1];
                v[j-1] = tmp;
                flag = false;
            }
        }
        
        for (int i = 0; i < len; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        
        if (flag) {
            break;
        }
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
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
