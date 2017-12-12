//
//  main.cpp
//  eeee
//
//  Created by 黄启明 on 2017/11/2.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>

using namespace std;

int func1(int a, int b) {
    return a + b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 10, b = 20;
    int sum = func1(a, b);
    cout << sum << endl;
    return 0;
}
