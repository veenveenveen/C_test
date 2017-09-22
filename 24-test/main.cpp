//
//  main.cpp
//  24-test
//
//  Created by 黄启明 on 2017/9/14.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>

#include "A.hpp"

int func(char s[]) {
    char *p = s;
    cout << *p << endl;
    cout << *s << endl;
    
    printf("%c",50);
//    printf("s = %d\n",s);
    
//    while (*p != 0) {
//        
//    }
    while (*p != '\0') {
//        cout << "..." << endl;
        p++;
//        cout << *p << endl;
    }
    printf("p = %d\n",p);
    printf("s = %d\n",s);
    cout << p << " " << s << endl;
    return p-s;
}

int main(int argc, const char * argv[]) {

//    A a(3,5);
////    A a1 = A(a);
////    A a2 = A(2,4);
////    A a1 = a;
//    A a2(a);
//    A a4;
//    A *a3 = new A(4,7);
//    delete a3;
    
//    char *s = "hello";
//    A aa(s);
//    A aaa(aa);
//    A a;
//    a = A(a);//A(2,3)创建临时对象
//    
//    std::cout << "Hello, World!\n";
//    a.show();
    
    cout << func("qwe0qq\0weew") << endl;
    
//    int m = 0xA3B4;
//    int m = 0xA3B4;
//    unsigned int n = m;
//    n = n >> 1;
//    cout << n << endl;
    return 0;
}
