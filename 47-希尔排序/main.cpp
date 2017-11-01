//
//  main.cpp
//  47-希尔排序
//
//  Created by 黄启明 on 2017/9/22.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void shellSort(vector<int> &v) {
    int len = int(v.size());
    int d = len / 2;
    while (d) {
        for (int i = d; i < len; i++) {
            int tmp = v[i];
            int j = i-d;
            while (j >= 0 && tmp < v[j]) {
                v[j+d] = v[j];
                j = j - d;
            }
            v[j+d] = tmp;
        }
        d = d / 2;
    
        
        for (int i = 0; i < len; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
//
//        if (flag) {
//            break;
//        }

}

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    shellSort(v);
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
