//
//  main.cpp
//  判断是否是回文数
//
//  Created by 黄启明 on 2017/9/13.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>

using namespace std;

int n_jiecheng(int n) {
    int sum = 1;
    for (int i = 1; i <= n; i++) {
        sum *= i;
    }
    return sum;
}

int n_pailie(int n, int m) {
    if (m == 1) {
        return 1;
    }
    int res = 1;
    for (int i = 1; i <= m; i++) {
        res *= n-i+1;
    }
    return res / n_jiecheng(m);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int x;
    cin >> x;
    int sum = 0;
    for (int i = 1; i <= x; i++) {
        sum += n_jiecheng(x-i+1)*n_pailie(x, i);
    }
    
    cout << sum << endl;
    
    return 0;
}
