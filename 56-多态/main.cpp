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
