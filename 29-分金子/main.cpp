//
//  main.cpp
//  29-分金子
//
//  Created by 黄启明 on 2017/9/16.
//  Copyright © 2017年 Himin. All rights reserved.
//

//分金子（360公司2017春招真题）
//A、B两伙马贼意外地在一片沙漠中发现了一处金矿，双方都想独占金矿，但各自的实力都不足以吞下对方，经过谈判后，双方同意用一个公平的方式来处理这片金矿。处理的规则如下：他们把整个金矿分成n段，由A、B开始轮流从最左端或最右端占据一段，直到分完为止。
//马贼A想提前知道他们能分到多少金子，因此请你帮忙计算他们最后各自拥有多少金子?（两伙马贼均会采取对己方有利的策略）

//DP动态规划问题
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
    //n份金子
    int n;
    cin >> n;
    return 0;
}

//网上答案

//#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <string.h>
//
//using namespace std;
//
//int main()
//{
//    int T = 0;
//    cin >> T;
//    
//    for (int i = 0; i < T; i++) {
//        int n = 0;
//        cin >> n;
//        int a[n];
//        int sum[n + 1];
//        memset(sum, 0, sizeof(sum));
//        sum[0] = 0;
//        int tmp = 0;
//        for (int j = 0; j < n; j++) {
//            cin >> a[j];
//            tmp += a[j];
//            sum[j + 1] = tmp;
//        }
//        
//        int dp[501][501];
//        memset(dp, 0, sizeof(dp));
//        dp[0][0] = 0;
//        for (int m = 0; m < n; m++) {
//            dp[m + 1][m + 1] = a[m];
//        }
//        
//        for (int t = 1; t < n; t++) {
//            for (int l = 1; l + t <= n; l++) {
//                int r = l + t;
//                dp[l][r] = sum[r] - sum[l - 1] - min(dp[l + 1][r], dp[l][r - 1]);
//            }
//        }
//        
//        cout << "Case #" << i + 1 << ": " << dp[1][n] << " " << sum[n] - dp[1][n] << endl;
//        
//    }
//    
//    return 0;
//}


//himin

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int getMaxIndex(vector<int> &v, int left ,int right) {
//    return v[left] >= v[right] ? left : right;
//}
//
//int main(int argc, const char * argv[]) {
//
//    int T;
//    cin >> T;
//    vector<vector<int>> V(T);
//    for (int i = 0 ; i < T; i++) {
//        int n;
//        cin >> n;
//        vector<int> v(n);
//        for (int j = 0; j < n; j++) {
//            cin >> v[j];
//        }
//        V[i] = v;
//    }
//    
//    for (int i = 0; i < T; i++) {
//        vector<int> vv = V[i];
//        int len = int(vv.size());
//        int sc1 = 0, sc2 = 0;
//        int left = 0,right = len-1;
//        for (int j = 0; j < len; j++) {
//            if (j % 2 == 0) {//sc1
//                int index = getMaxIndex(vv, left, right);
//                sc1 += vv[index];
//                if (index == left) {
//                    left++;
//                }
//                else {
//                    right--;
//                }
//            }
//            else {//sc2
//                int index = getMaxIndex(vv, left, right);
//                sc2 += vv[index];
//                if (index == left) {
//                    left++;
//                }
//                else {
//                    right--;
//                }
//            }
//        }
//        cout << "Case #" << i+1 << ":" << sc1 << " " << sc2 << endl;
//    }
//
//    return 0;
//}
