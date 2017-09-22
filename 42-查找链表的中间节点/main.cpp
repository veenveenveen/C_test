//
//  main.cpp
//  42-查找链表的中间节点
//
//  Created by 黄启明 on 2017/9/21.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>

using namespace std;

struct List {
    int data;
    struct List *next;
};

//查找链表的中间节点

List *searchMiddleNode(List *list) {
    List *fast = list;
    List *slow = list;
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main(int argc, const char * argv[]) {

    
    
    std::cout << "Hello, World!\n";
    return 0;
}
