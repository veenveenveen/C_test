//
//  main.cpp
//  8
//
//  Created by 黄启明 on 2017/9/7.
//  Copyright © 2017年 Himin. All rights reserved.
//
//

//判断一个字符串是否匹配支持 . 和 *的正则表达式。
//. 表示匹配任意一个字符 * 匹配任意多个位于它前面的字符

#include <iostream>
#include <string>

using namespace std;

int isMatching(string str1, string str2) {
    
    int len1 = int(str1.size());
//    int len2 = int(str2.size());
    int i = 0, j = 0;
    while (1) {
        if (str1[i] != str2[j]) {
            if (str2[j] == '.') {
                if (str2[j+1] != '*') {
                    i++;
                    j++;
                }
                else {
                    return 1;
                }
            }
            else if (str2[j+1] == '*') {
                j = j + 2;
            }
            else {
                return 0;
            }
        }
        else{
            if(str2[j+1] == '*'){
                i++;
            }
            else {
                i++;
                j++;
            }
        }
        
        if(i==len1) {
            break;
        }
    }
    return 1;
}

int main(int argc, const char * argv[]) {

    string str1,str2;
    cin >> str1 >> str2;
    
    std::cout << isMatching(str1, str2);
    return 0;
}
