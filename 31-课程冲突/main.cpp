//
//  main.cpp
//  31-课程冲突
//
//  Created by 黄启明 on 2017/9/16.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

bool isHaveRepate(vector<int> &v) {
    int len = int(v.size());
    bool flag = false;
    vector<int> v_tmp = v;
    sort(v_tmp.begin(), v_tmp.end());
    for (int i = 0; i < len-1; i++) {
        if (v_tmp[i] == v_tmp[i+1] ) {
            flag = true;
            break;
        }
    }
    return flag;
}

int main(int argc, const char * argv[]) {

    int n;
    cin >> n;
    vector<int> v_time(n);
    vector<int> v_classcode(n);
    
    vector<int> time_res;
    
    for (int i = 0; i < n; i++) {
        cin >> v_time[i] >> v_classcode[i];
    }
    
    if (!isHaveRepate(v_time)) {
        cout << "YES" << endl;
    }
    else {
        
        for (int i = 0 ; i < n; i++) {
            int time = v_time[i];
            vector<int> v_res;
            for (int j = 0; j < n; j++) {
                
            }
            
        }
    }
    
    
    return 0;
}
