//
//  ToyDog.hpp
//  56-多态
//
//  Created by 黄启明 on 2017/12/6.
//  Copyright © 2017年 Himin. All rights reserved.
//

#ifndef ToyDog_hpp
#define ToyDog_hpp

#include <iostream>
using namespace std;

//基类
class ToyDog {
    //此处为属性，题目中没有涉及
public:
    int age;
    char *name;
    
public:
    //构造函数
    ToyDog();
    //拷贝构造函数
    ToyDog(ToyDog &d);
    
    //注意：多态性的实现是通过基类的指针或引用实现的
    //两个行为 swimming 和 bark
    virtual void swimming();
    virtual void bark();
    
    //析构函数
    virtual ~ToyDog();
};

#endif /* ToyDog_hpp */
