//
//  main.cpp
//  30-跑步
//
//  Created by 黄启明 on 2017/9/16.
//  Copyright © 2017年 Himin. All rights reserved.
//

//跑步（奇虎360 2017春招真题）
//小明同学喜欢体育锻炼，他常常去操场上跑步。跑道是一个圆形，在本题中，我们认为跑道是一个半径为R的圆形，设圆心的坐标为原点(0,0)。
//小明跑步的起点坐标为(R,0)，他沿着圆形跑道跑步，而且一直沿着一个方向跑步。回到家后，他查看了自己的计步器，计步器显示他跑步的总路程为L。
//小明想知道自己结束跑步时的坐标，但是他忘记自己是沿着顺时针方向还是逆时针方向跑的了。他想知道在这两种情况下的答案分别是多少。

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int L,R;
    cin >> L >> R;
    
    int n = L / (R*2*M_PI);
    double m = L - R*2*M_PI*n;

    double x = R * cos(m/double(R));
    double y = R * sin(m/double(R));
    
    printf("%.3f %.3f\n",x,-y);
    printf("%.3f %.3f\n",x,y);
    
    return 0;
}

//剪气球
//#include <iostream>
//#include <vector>
//#include <iomanip>
//#include <cmath>
//#include <cstring>
//#include <cstdio>
//#include <string>
//using namespace std;
//const int MOD = 1e9 + 7;
//int main()
//{
//    int n=0,a[100000];
//    while(cin>>n){
//        int dp[100001],num[10];
//        for (int i=1;i<=n;i++){
//            cin>>a[i];
//        }
//        for (int i=1;i<=n;i++){
//            memset(num,0,sizeof(num));
//            num[a[i]]++;
//            dp[i]=dp[i-1];
//            for (int j=i-1;j>=0;j--){
//                num[a[j]]++;
//                if (num[a[j]]>1)
//                    break;
//                if (j==0)
//                    dp[i]++;
//                else 		
//                    dp[i]=(dp[i]+dp[j-1])%MOD;
//            }
//        }
//        
//        cout<<dp[n]<<endl;
//    }
//    return 0;
//}
