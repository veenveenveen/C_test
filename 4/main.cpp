//
//  main.cpp
//  4
//
//  Created by 黄启明 on 2017/9/7.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

void revertStr(string &str, int i, int j) {
    char c;
    while (i < j) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
}

int isRevertStr(string str1, string str2) {
    int n = int(str1.size());
    if (str1.size() != str2.size()) {
        return 0;
    }
    
    string s1 = str1;
    revertStr(s1, 0, n-1);
    if (s1 == str2) {
        return 1;
    }
    
    for (int i = 1; i < n; i++) {
        
        s1 = str1;
        revertStr(s1, 0, i-1);
        revertStr(s1, i, n-1);
        revertStr(s1, 0, n-1);
        
        if (s1 == str2) {
            return 1;
        }
    }
    
    return 0;
}

int main(int argc, const char * argv[]) {
    
    string str1,str2;
    cin >> str1 >> str2;
    
    std::cout << isRevertStr(str1, str2);
    
    return 0;
}
