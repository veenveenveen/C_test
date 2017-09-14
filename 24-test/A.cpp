//
//  A.cpp
//  test000
//
//  Created by 黄启明 on 2017/9/14.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include "A.hpp"

A::A() {
    x = y = 0;
    cout << "A" << endl;
}

A::A(char *str) {
    p = new char[strlen(str)+1];
    strcpy(p, str);
    cout << "A: str" << endl;
}

A::A(A &a) {
    x = a.x;
    y = a.y;
//    p = a.p; 错误 不能直接赋值
    p = new char[strlen(a.p)+1];
    strcpy(p, a.p);
    cout << "A copy" << endl;
}

A::A(int x, int y) {
    this->x = x;
    this->y = y;
    cout << "A:" << x << " " << y <<endl;
}

A::~A() {
    delete []p;
    cout << "~A" << endl;
}
