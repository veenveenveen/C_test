//
//  main.cpp
//  18
//
//  Created by 黄启明 on 2017/9/11.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    int n,k;
    cin >> n >> k;
    
    vector<int> v(n);
    vector<int> vMax(4);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int maxL = 0;
    int minNum = v[0];
    
    for (int j = 0; j < 4; j++) {
        maxL += v[j];
        vMax[j] = v[j];
        if (minNum > v[j]) {
            minNum = v[j];
        }
    }
    
    sort(vMax.begin(), vMax.end());
    
    cout << maxL << " ";
    
    for (int m = 4; m < n; m++) {
        if (minNum < v[m]) {
            maxL = 0;
            vMax[0] = v[m];
            sort(vMax.begin(), vMax.end());
            for (int j = 0; j < 4; j++) {
                maxL += vMax[j];
            }
            minNum = vMax[0];
        }
        cout << maxL << " ";
    }
    
    return 0;
}
