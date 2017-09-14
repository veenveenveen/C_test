//
//  main.cpp
//  16
//
//  Created by 黄启明 on 2017/9/10.
//  Copyright © 2017年 Himin. All rights reserved.
//

//度度熊找子串（百度2017秋招真题）
//
//题目描述
//
//度度熊收到了一个只有小写字母的字符串S，他对S的子串产生了兴趣，S的子串为S中任意连续的一段。他发现，一些子串只由一种字母构成，他想知道在S中一共有多少种这样的子串。
//例如在串”aaabbaa”中，度度熊想找的子串有”a”,”aa”,”aaa”,”b”,”bb”五种。

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int getSubstringCount(string str) {
    
    vector<int> v(26,0);//记录次数的容器
    int len = int(str.size());
    int child_len;//记录子串的长度
    
    int i,k;
    for (i = 0; i < len;) {
        k = i;
        while (str[k] == str[i]) {
            k++;
        }
        child_len = k - i;
        if (v[str[i] - 'a'] < child_len) {
            v[str[i] - 'a'] = child_len;
        }
        i = k;
    }
    
    int sum = 0;
    for (i = 0; i < 26; i++) {
        sum += v[i];
    }
    
    return sum;
}

int main(int argc, const char * argv[]) {

    string str;
    cin >> str;
    
    cout << getSubstringCount(str) << endl;
    
    return 0;
}
