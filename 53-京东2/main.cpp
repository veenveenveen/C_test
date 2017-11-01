//
//  main.cpp
//  53-京东2
//
//  Created by 黄启明 on 2017/10/18.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
using namespace std;
int func(int m, int n) {
    static int cou = 0;
    cou++;
    for (int i = 2; i <= n; i++) {
        if ((m-i) > 0) {
            func(m-i, i);
        }
        else if ((m-i) == 0) {
            cou++;
        }
    }
    return cou;
}

int main(int argc, const char * argv[]) {
    int i;
    cin >> i;
    int m,n;
    while (i--) {
        cin >> m >> n;
        cout << func(m, n) << endl;
    }
    
    return 0;
}
