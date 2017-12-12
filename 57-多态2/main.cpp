//
//  main.cpp
//  56-多态
//
//  Created by 黄启明 on 2017/12/6.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include "Dogs.hpp"

int main(int argc, const char * argv[]) {
    
    //多态指的是当多个子类继承自父类时，分别实现了父类的方法，当用父类的指针指向子类，父类的指针调用对应的方法时，会调用指向的子类实现的方法。
    //注意：多态性的实现是通过基类的指针或引用实现的
    BlackHeadDog bhd;
    ToyDog *td1 = &bhd;
    td1->swimming();
    td1->bark();
    
    RubberDog rd;
    ToyDog *td2 = &rd;
    td2->swimming();
    td2->bark();
    
    ModelDog md;
    ToyDog *td3 = &md;
    td3->swimming();
    td3->bark();
    
    DecoyDog dd;
    ToyDog *td4 = &dd;
    td4->swimming();
    td4->bark();
    
    MallardDog mld;
    ToyDog *td5 = &mld;
    td5->swimming();
    td5->bark();
    
    return 0;
}
