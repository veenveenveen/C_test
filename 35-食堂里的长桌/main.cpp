//
//  main.cpp
//  35-食堂里的长桌
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
bool fun(string table, int n) {
    string str = "000";
    string str_other = "00";
    
    size_t offset = 0;
    size_t count = 0;
    size_t increment = str.length();
    
    if (table[0] == '0' && table[1] == '0') {
        count++;
    }
    
    cout << "count1 = " << count << endl;
    
    while (true) {
        offset = table.find(str,offset);
        if (offset == string::npos) {
            break;
        }
        offset += increment;
        count++;
    }
    
    cout << "count2 = " << count << endl;
    
    int len = int(table.size());
    if (table[len-2] == '0' && table[len-1] == '0' && table[len-3] != '0') {
        count++;
    }
    
    cout << "count3 = " << count << endl;
    
    if (count >= n) {
        return true;
    }
    else {
        return false;
    }
    
    
    
}
/******************************结束写代码******************************/


int main() {
    bool res;
    
    string _table;
    getline(cin, _table);
    int _n;
    cin >> _n;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    
    
    
    res = fun(_table, _n);
    cout << res << endl;
    
    return 0;
    
}
