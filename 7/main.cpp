//
//  main.cpp
//  7
//
//  Created by 黄启明 on 2017/9/7.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int isPalindromicNumber(string a) {
    int flag = 1;
    int n = int(a.size());
    for (int i = 0; i < n/2; i++) {
        if (a[i] != a[n-1-i]) {
            flag = 0;
        }
    }
    
    return flag;
}

int main(int argc, const char * argv[]) {
    string a;
    cin >> a;
    std::cout << isPalindromicNumber(a) << endl;
    return 0;
}
