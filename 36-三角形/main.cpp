//
//  main.cpp
//  36-三角形
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

void printVector(vector<int> &v) {
    for (int i = 0; i < int(v.size()); i++) {
        cout << v[i] << "\t";
    }
    cout << endl;
}

bool notHave(vector<int> &v, long int m) {
    int len = int(v.size());
    for (int i = 0; i < len; i++) {
        if (v[i] == m) {
            return false;
        }
    }
    return true;
}

vector<int> getNextRow(vector<int> &vpre) {
    int len = int(vpre.size());
    vector<int> vnext(len+1);
    vnext[0] = 1;
    for (int i = 1; i < len; i++) {
        vnext[i] = vpre[i] + vpre[i-1];
    }
    vnext[len] = 1;
    return vnext;
}

long fun(long x) {
    int row = 1;
    if (x == row) {
        return 1;
    }
    
    cout << "第" << row << "\t\t";
    cout << 1 << "\t" << endl;
    
    row = 2;
    vector<int> vpre(row);
    for (int i = 0; i < row; i++) {
        vpre[i] = 1;
    }
    
    cout << "第" << row << "\t\t";
    printVector(vpre);
    
    vector<int> vnext = getNextRow(vpre);
    row++;
    cout << "第" << row << "\t\t";
    printVector(vnext);
    
    while (notHave(vnext, x)) {
        vpre = vnext;
        vnext = getNextRow(vpre);
        row++;
        
        cout << "第" << row  << "\t\t";
        printVector(vnext);
    }
    
    return row;
}
/******************************结束写代码******************************/


int main() {
    long res;
    
    long _x;
    cin >> _x;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    
    res = fun(_x);
    cout << "首次出现: 第" << res << "行" << endl;;
    
    return 0;
    
}
