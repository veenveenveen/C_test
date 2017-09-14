//
//  main.cpp
//  12
//
//  Created by 黄启明 on 2017/9/8.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

double findMaxDistance(vector<double> &v) {
    
    int len = int(v.size());
    double maxDistance = 0;
    
    double tmp = 0;
    
    for (int i = 0; i < len-1; i++) {
        for (int j = len - 1; j > i; j--) {
            tmp = v[j] - v[i];
            if (tmp < 180.0) {
                if (tmp > maxDistance) {
                    maxDistance = tmp;
                }
                break;
            }
        }
    }
    return maxDistance;
}

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    
    vector<double> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << findMaxDistance(v) << endl;
    return 0;
}
