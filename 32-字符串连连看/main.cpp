//
//  main.cpp
//  32-字符串连连看
//
//  Created by 黄启明 on 2017/9/17.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

bool isHaveRepate(string str) {
    bool flag = false;
    int len = int(str.size());
    int k = 0;
    int count = 0;
    for (int i = 0; i < len; i++) {
        char x = str[k];
        if (str[i] == x) {
            count++;
            if (count >= 3) {
                return true;
            }
        }
        else {
            k = i;
            count = 1;
        }
    }
    return flag;
}

int main(int argc, const char * argv[]) {

    string str;
    cin >> str;
    
    while (isHaveRepate(str)) {
        int len = int(str.size());
        int k = 0;
        int count = 0;
        int start = 0, end = 0;
        for (int i = 0; i < len; i++) {
            char x = str[k];
            start = k;
            if (str[i] == x) {
                count++;
                if (i == len-1) {
                    if (count >= 3) {
                        end = i;
                        str = str.replace(str.begin()+start, str.begin()+end+1, "");
                        break;
                    }
                }
            }
            else {
                if (count >= 3) {
                    end = i;
                    str = str.replace(str.begin()+start, str.begin()+end, "");
                    break;
                }
                else {
                    k = i;
                    count = 1;
                }
            }
        }
    }
    
    cout << str << endl;
    
    return 0;
}
