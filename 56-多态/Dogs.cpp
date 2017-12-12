//
//  Dogs.cpp
//  56-多态
//
//  Created by 黄启明 on 2017/12/6.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include "Dogs.hpp"
//
void BlackHeadDog::swimming() {
    cout << "BlackHeadDog can swim, swimming with legs" << endl;
}
void BlackHeadDog::bark() {
    cout << "BlackHeadDog bark" << endl;
}

//
void RubberDog::swimming() {
    cout << "RubberDog swimming no way" << endl;
}
void RubberDog::bark() {
    cout << "RubberDog bark" << endl;
}

//
void ModelDog::swimming() {
    cout << "ModelDog swimming no way" << endl;
}
void ModelDog::bark() {
    cout << "ModelDog bark" << endl;
}

//
void DecoyDog::swimming() {
    cout << "DecoyDog swimming no way" << endl;
}
void DecoyDog::bark() {
    cout << "DecoyDog mute bark" << endl;
}

//
void MallardDog::swimming() {
    cout << "MallardDog can swim, swimming rocket powered" << endl;
}
void MallardDog::bark() {
    cout << "MallardDog bark" << endl;
}
