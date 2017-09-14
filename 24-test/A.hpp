//
//  A.hpp
//  test000
//
//  Created by 黄启明 on 2017/9/14.
//  Copyright © 2017年 Himin. All rights reserved.
//

#ifndef A_hpp
#define A_hpp

#include <iostream>

using namespace std;

class A {
private:
    int x;
    int y;
    char *p;
public:
    A();
    A(char *str);
    A(A &a);
    A(int x, int y);
    ~A();
};


#endif /* A_hpp */
