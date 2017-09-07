//
//  main.cpp
//  6
//
//  Created by 黄启明 on 2017/9/7.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

//在中序中查找根的下标
int findRoot(char c, string in, int s, int e) {
    int i;
    for(i = s; i <= e; i++) {
        if(in[i] == c) {
            break;
        }
    }
    return i;
}

/*
 *递归遍历求得后序
 *@pre:先序序列
 *@pre_s:当前二叉树的先序序列起始下标
 *@pre_e:当前二叉树的先序序列结束下标
 *@in:中序序列
 *@in_s:当前二叉树的中序序列起始下标
 *@in_e:当前二叉树的中序序列结束下标
 */
void postOrder(string pre, int pre_s, int pre_e, string in, int in_s, int in_e) {
    char c;  //根节点符号
    int root;  //根节点在中序中的下标
    int l_len, r_len;//左、右子树节点数
    
    //当前二叉树只有一个节点(叶子节点)
    if(in_s == in_e) {
        printf("%c", in[in_s]);
    }
    else {
        //当前二叉树的根节点
        c = pre[pre_s];
        
        //获取根节点在中序中的下标
        root = findRoot(c, in, in_s, in_e);
        
        //计算左、右子树的节点数
        l_len = root - in_s;
        r_len = in_e - root;
        
        //分割左子树
        if(l_len > 0) {//左子树节点数不为0
        
            postOrder(pre, pre_s+1, pre_s+l_len,
                      in, in_s, root-1);
        }
        
        //分割右子树
        if(r_len > 0) {//右子树节点数不为0
        
            postOrder(pre, pre_e-r_len+1, pre_e,
                      in, root+1, in_e);
        }
        
        //后序输出根
        printf("%c", c);
    }
}

int main() {
    string str1,str2;
    cin >> str1 >> str2;
    
    postOrder(str1, 0, int(str1.size())-1, str2, 0, int(str2.size())-1);
    
    return 0;
}
