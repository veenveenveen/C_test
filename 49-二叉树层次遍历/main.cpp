//
//  main.cpp
//  49-二叉树层次遍历
//
//  Created by 黄启明 on 2017/9/22.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <string>

#define MAXSIZE 100

using namespace std;

struct BTLink {
    char data;
    struct BTLink *left, *right;
};

//创建一棵二叉树
BTLink *creatBT() {
    
    BTLink *bt[MAXSIZE];
    BTLink *s;
    char x;
    int i,j;
    cout << "请输入各节点的编号和值:" << endl;
    cin >> i >> x;
    while (i != 0 && x != '$') {
        s = (BTLink *)malloc(sizeof(BTLink));
        s->data = x;
        s->left = NULL;
        s->right = NULL;
        bt[i] = s;
        if (i != 1) {
            j = i / 2;
            if (i % 2 == 0) {
                bt[j]->left = s;
            }
            else {
                bt[j]->right = s;
            }
        }
        cout << "请输入各节点的编号和值:" << endl;
        cin >> i >> x;
    }
    
    return bt[1];
}

//层次遍历
void levelTraverse(BTLink *bt) {
    BTLink *p[MAXSIZE], *cur;
    int front = 0, rear = 0;
    if (bt != NULL) {
        rear = (rear + 1) % MAXSIZE;
        p[rear] = bt;
    }
    while (front != rear) {
        front = (front + 1) % MAXSIZE;
        cur = p[front];
        
        printf("%c ",cur->data);
        
        if (cur->left != NULL) {
            rear = (rear + 1) % MAXSIZE;
            p[rear] = cur->left;
        }
        if (cur->right != NULL) {
            rear = (rear + 1) % MAXSIZE;
            p[rear] = cur->right;
        }
        
    }
}

//先序遍历
void preOrder(BTLink *bt) {
    if (bt != NULL) {
        printf("%c ",bt->data);
        preOrder(bt->left);
        preOrder(bt->right);
    }
}

///根据前序和中序序列求后序遍历
//在中序中查找根的下标
int findRoot(char c, string in, int s, int e) {
    int i;
    for (i = s; i <= e; i++) {
        if (in[i] == c) {
            break;
        }
    }
    return i;
}
//后序遍历并输出
void postOrder(string pre, int pre_s, int pre_e, string in, int in_s, int in_e) {
    char c;
    int root;//根节点在中序中的下标
    int l_len, r_len;//左右子树的节点数
    if (in_s == in_e) {
        cout << in[in_s] << " ";
    }
    else {
        c = pre[pre_s];
        root = findRoot(c, in, in_s, in_e);
        l_len = root - in_s;
        r_len = in_e - root;
        
        if (l_len > 0) {
            postOrder(pre, pre_s+1, pre_s+l_len, in, in_s, root-1);
        }
        if (r_len > 0) {
            postOrder(pre, pre_e-r_len+1, pre_e, in, root+1, in_e);
        }
        
        cout << c << " ";
    }
}

int main(int argc, const char * argv[]) {

//    BTLink *bt = creatBT();
//    levelTraverse(bt);
//    cout << endl;
//    preOrder(bt);
    
    postOrder("EBADCFHGIKJ", 0, 10, "ABCDEFGHIJK", 0, 10);
    cout << endl;
    
    return 0;
}
