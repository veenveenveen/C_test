//
//  ToyDog.cpp
//  56-多态
//
//  Created by 黄启明 on 2017/12/6.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include "ToyDog.hpp"

//构造函数
ToyDog::ToyDog() {
    age = 0;
    name = new char[10];
    strcpy(name, "toy dog");
    cout << "ToyDog" << endl;
}
//拷贝构造函数
ToyDog::ToyDog(ToyDog &d) {
    age = d.age;
    name = new char[10];
    strcpy(name, d.name);
    cout << "ToyDog copy" << endl;
}

//两个行为 swimming 和 bark
void ToyDog::swimming() {
    cout << "ToyDog swimming" << endl;
}
void ToyDog:: bark() {
    cout << "ToyDog bark" << endl;
}

//析构函数
ToyDog::~ToyDog() {
    delete []name;
    cout << "~ToyDog" << endl;
}
