//
//  main.cpp
//  5
//
//  Created by 黄启明 on 2017/9/7.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int n,sum;
    int num;
    bool res = false;
    vector<int> v(n);
    
    while (cin >> n >> sum) {
        for (int i = 0; i < n; i++) {
            cin >> num;
            v.push_back(num);
        }
        int begin = 0, end = int(v.size())-1;
        while (begin < end) {
            if (v[begin] + v[end] == sum) {
                cout << begin << " " << end << endl;
                res = true;
                return 0;
            }
            if (v[begin] + v[end] < sum) {
                begin++;
            }
            if (v[begin] + v[end] > sum) {
                end--;
            }
        }
        if (!res) {
            cout << "false" << endl;
        }
    }

    return 0;
}
