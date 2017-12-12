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
   
public:
    //构造函数
    ToyDog();
    //拷贝构造函数
    ToyDog(ToyDog &d);
    
    //两个行为 swimming 和 bark
    virtual void swimming();
    virtual void bark();
    
    //析构函数
    virtual ~ToyDog();
};

#endif /* ToyDog_hpp */
