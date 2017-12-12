//
//  main.cpp
//  ssss
//
//  Created by 黄启明 on 2017/11/2.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>

int func1(int a, int b) {
    return a + b;
}

int func2(int x) {
    return x * x;
}

int func3(int a, int b) {
    return func2(func1(a, b));
}
int func4(int a, int b) {
    int ss = func2(func1(a, b));
    std::cout << ss;
}

int main(int argc, const char * argv[]) {
    
    func4(5,6);
    
    return 0;
}


