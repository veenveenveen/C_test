//
//  main.cpp
//  26-关灯游戏
//
//  Created by 黄启明 on 2017/9/14.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int indexOf1(vector<int> &v) {
    int i;
    int len = int(v.size());
    for (i = 0; i < len; i++) {
        if (v[i] == 1) {
            break;
        }
    }
    return i;
}

bool has1(vector<int> &v) {
    bool flag = false;
    int len = int(v.size());
    for (int i = 0; i < len; i++) {
        if (v[i] == 1) {
            flag = true;
            break;
        }
    }
    return flag;
}

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    bool flag = true;
    int index = indexOf1(v);
    
    for (int i = index; i < n;) {
        v[i] = 0;
        for (int j = i+1; j < n; j++) {
            if (v[j] == 0) {
                v[j] = 1;
            }
            else if (v[j] == 1) {
                v[j] = 0;
            }
        }
        if (!has1(v)) {
            break;
        }
        i = indexOf1(v);
        flag = !flag;
    }
    
    if (flag) {
        cout << "Alice" << endl;
    }
    else {
        cout << "Bob" << endl;
    }
    
    return 0;
}
