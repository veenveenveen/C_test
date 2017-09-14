//
//  main.cpp
//  15
//
//  Created by 黄启明 on 2017/9/9.
//  Copyright © 2017年 Himin. All rights reserved.
//

//重排数列

#include <iostream>
#include <vector>

using namespace std;

bool sequenceReset(vector<int> & v) {
    int len = int(v.size());
    int len1 = 0;
    for (int i = 0; i < len; i++) {
        if (v[i] % 2 == 0) {
            len1++;
        }
    }
    
    if (len1 >= len / 2) {
        return true;
    }
    else {
        return false;
    }
}

int main(int argc, const char * argv[]) {

    bool flag = true;
    
    int t;
    cin >> t;
    
    while (t > 0) {
        int n;
        cin >> n;
        vector<int> v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        if (!sequenceReset(v)) {
            flag = false;
            break;
        }
        
        t--;
    }
    
    if (flag) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
