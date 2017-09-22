//
//  main.cpp
//  34-二叉树
//
//  Created by 黄启明 on 2017/9/18.
//  Copyright © 2017年 Himin. All rights reserved.
//

//链式存储

#include <iostream>

#define MAXSIZE 100

using namespace std;

typedef struct Node {
    struct Node *left,*right;
    char data;
}BTLinkList;

BTLinkList *creatbt() {
    BTLinkList *q[MAXSIZE];
    BTLinkList *s;
    char x;
    int i,j;
    printf("输入二叉树各节点的编号和值: \n");
    scanf("%d,%c",&i,&x);
    while (i != 0 && x != '$') {
        s = (BTLinkList *)malloc(sizeof(BTLinkList));//生成节点
        s->data = x;
        s->left = NULL;
        s->right = NULL;
        q[i] = s;
        if (i != 1) {
            j = i / 2;//i的双亲节点的编号
            if (i % 2 == 0) {
                q[j]->left = s;
            }
            else {
                q[j]->right = s;
            }
        }
        
        printf("输入二叉树各节点的编号和值: \n");
        scanf("%d,%c",&i,&x);
    }
    return q[1];
}

BTLinkList *creatbtWith(string str) {
    int len = int(str.size());
    BTLinkList *p[len+1];
    BTLinkList *s;
    int j;
    for (int i = 1; i <= len; i++) {
        s = (BTLinkList *)malloc(sizeof(BTLinkList));
        s->left = NULL;
        s->right = NULL;
        s->data = str[i];
        p[i] = s;
        if (i != 1) {
            j = i / 2;
            if (i%2 == 0) {
                p[j]->left = s;
            }
            else {
                p[j]->right = s;
            }
        }
    }
    return p[1];
}

void printNode(char x) {
    printf("%c ",x);
}

void postorder(BTLinkList * bt) {
    if (bt != NULL) {
        postorder(bt->left);
        postorder(bt->right);
        printNode(bt->data);
    }
}

int main(int argc, const char * argv[]) {
    
//    BTLinkList * bt = creatbt();
    BTLinkList *bt = creatbtWith(" ABCDEFG  HI J");
    postorder(bt);
    
    return 0;
}
