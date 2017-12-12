//
//  Dogs.hpp
//  56-多态
//
//  Created by 黄启明 on 2017/12/6.
//  Copyright © 2017年 Himin. All rights reserved.
//

#ifndef Dogs_hpp
#define Dogs_hpp

#include "ToyDog.hpp"

//黑头狗
class BlackHeadDog: public ToyDog {
public:
    //构造函数
    BlackHeadDog() {
        cout << "BlackHeadDog" << endl;
    }
    
    //虚继承 子类可以省略 virtual 关键字
    void swimming();
    void bark();
    
    ~BlackHeadDog() {
        cout << "~BlackHeadDog" << endl;
    }
};

//橡皮狗
class RubberDog: public ToyDog {
public:
    void swimming();
    void bark();
};

//模型狗
class ModelDog: public ToyDog {
public:
    void swimming();
    void bark();
};

//诱饵狗
class DecoyDog: public ToyDog {
public:
    void swimming();
    void bark();
};

//野狗
class MallardDog: public ToyDog {
public:
    void swimming();
    void bark();
};

#endif /* Dogs_hpp */
