//
//  main.cpp
//  25-被7整除
//
//  Created by 黄启明 on 2017/9/14.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int num_b(int x) {
    if (x == 0) {
        return 1;
    }
    int i = 0;
    while (x) {
        x /= 10;
        i++;
    }
    return i;
}

int getNewNumber(int a, int b) {
    int tmp = a * pow(10, num_b(b)) + b;
    return tmp;
}

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    int res = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (getNewNumber(v[i],v[j]) % 7 == 0) {
                res++;
            }
            if (getNewNumber(v[j],v[i]) % 7 == 0) {
                res++;
            }
        }
    }
    
    cout << res << endl;
    
    return 0;
}
