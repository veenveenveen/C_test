//
//  main.cpp
//  37-公司饮料太便宜
//
//  Created by 黄启明 on 2017/9/18.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

using namespace std;


/*请完成下面这个函数，实现题目要求的功能
 当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
 ******************************开始写代码******************************/

int numberOfChar(string str,char x) {
    int count = 0;
    for (int i = 0; i < int(str.size()); i++) {
        if (str[i] == x) {
            count++;
        }
    }
    return count;
}

bool haveChar(vector<char> &v, char x) {
    int len = int(v.size());
    for (int i = 0; i < len; i++) {
        if (v[i] == x) {
            return true;
        }
    }
    return false;
}

int fun(string drinks, int n) {
    int len = int(drinks.size());
    vector<char> v(10001);
    vector<char> kinds;
    kinds.push_back(drinks[0]);
    for (int i = 1; i < len; i++) {
        if (!haveChar(kinds, drinks[i])) {
            kinds.push_back(drinks[i]);
        }
    }
    
    int k = 0;
    for (int i = 0; i < int(kinds.size()); i++) {
        int cou = numberOfChar(drinks, kinds[i]);
        for (int j = 0; j < cou; j++) {
            v[k] = kinds[i];
            if (j != cou-1) {
                k += n;
            }
        }
        if (i != int(kinds.size())-1) {
            k++;
        }
    }
    
    return k;
    
}
/******************************结束写代码******************************/


int main() {
    int res;
    
    string _drinks;
    getline(cin, _drinks);
    int _n;
    cin >> _n;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    
    
    
    res = fun(_drinks, _n);
    cout << res << endl;
    
    return 0;
    
}
