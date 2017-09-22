//
//  main.cpp
//  整数求和
//
//  Created by 黄启明 on 2017/9/19.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {

    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        v[i] = i+1;
    }
    
    int count = 0;
    for (int i = 0; i < n-1; i++) {
        int sum = v[i];
        int j = i+1;
        while (j < n) {
            for (int k = j; k < n; k++) {
                if (sum == m) {
                    count++;
                    break;
                }
                sum += v[k];
                if (sum == m) {
                    count++;
                    break;
                }
                if (sum > m) {
                    break;
                }
                
            }
            sum = v[i];
            j++;
        }
        
    }
    
    cout << count << endl;;
    return 0;
}
