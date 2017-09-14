//
//  main.cpp
//  17
//
//  Created by 黄启明 on 2017/9/10.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>

//int main(int argc, const char * argv[]) {
//
//    int a[5]={1,2,3,4,5};
//    int *p=(int *)(&a+1);
//    printf("%d",*(p-1));
//    
//    std::cout << "Hello, World!\n";
//    return 0;
//}

class A{
    int i;
};
class B{
    A *p;
public:
    B(){p=new A;}
    ~B(){delete p;}
};
void sayHello(B b){
}
int main(){
    B *b = new B();
    sayHello(*b);
}
