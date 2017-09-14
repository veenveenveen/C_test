//
//  main.cpp
//  22-两数之和问题
//
//  Created by 黄启明 on 2017/9/12.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

void printVector(vector<int> &v) {
    int n = int(v.size());
    for (int i = 0; i < n; i++) {
        cout << v[i] << ((i == n-1) ? "\n" : " ");
    }
}

vector<int> twoSum(vector<int> &v, int target) {
    
    map<int, int> mapping;
    vector<int> result;
    
    int len = int(v.size());
    
    for (int i = 0; i < len; i++) {
        mapping[v[i]] = i;
    }
    
    for (int j = 0; j < len; j++) {
        int searched = target - v[j];
        if (mapping.find(searched) != mapping.end() && j != mapping[searched]) {
            result.push_back(j+1);
            result.push_back(mapping[searched]+1);
            break;
        }
    }
    
    return result;
}

int main(int argc, const char * argv[]) {

    int n,target;
    cin >> n >> target;
    
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<int> res = twoSum(v, target);

    printVector(res);
    
    return 0;
}
