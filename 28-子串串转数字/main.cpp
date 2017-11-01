//
//  main.cpp
//  28-子串串转数字
//
//  Created by 黄启明 on 2017/9/15.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void func1(string str) {//字符串转数字
    int a;
    sscanf(str.c_str(), "%d", &a);
    cout << a+1 << endl;
}

void func2() {//数字转字符串
    ostringstream oss;
    int i = 351763;
    oss << i;
    string str2 = oss.str();
    cout << "str " << str2 << endl;
}

int main(int argc, const char * argv[]) {

    string str = "1243561278";
    func1(str);
//    func2();
    return 0;
}
