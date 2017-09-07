//
//  main.cpp
//  1
//
//  Created by 黄启明 on 2017/9/7.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int longestPalindromicString(string str) {
    int len = int(str.size());
    int i = 0;
    int j = len - 1;
    int count = 0;
    while (i < j) {
        if (str[i] == str[j]) {
            i++;
            j--;
        }
        else {
            count++;
            i = 0;
            j = len - count;
        }
    }
    if (i == j) {
        return 2 * i + 1;
    }
    if (i > j) {
        return 2 * i;
    }
    return 0;
}

//定义两个大于2的偶数之间的距离，为这两个数之间质数的个数。从小到大输入n个大于2的偶数，输出所有数两两之间距离的总和（应该有n*(n-1)/2个距离，输出总和就好)。

bool isPrime(int a) {
    bool flag = true;
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

int longDistance(int a, int b) {
    
    int distance = 0;
    
    for (int num1 = a + 1; num1 < b;  num1 =  num1 + 2) {
        if (isPrime(num1)) {
            distance++;
        }
    }
    return distance;
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    1.
//    string str;
//    cin >> str;
//    cout << longestPalindromicString(str) << endl;
    
//    2.
    
    int sum = 0;
    
    int n = 0;
    cin >> n;
    
    vector<int> even(n);
    vector<int> dis(n-1);
    
    for (int i = 0; i < n; i++) {
        cin >> even[i];
    }
    for (int i = 0; i < n - 1; i++) {
        int a = even[i];
        int b = even[i+1];
        int count = longDistance(a, b);
        dis[i] = count;
    }
    for (int j = 0; j < n-2; j++) {
        sum = dis[j] * (n - 2 - j);
    }
    cout << sum << endl;
   
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#define max 8000000

int isprime(int s)
{
    int t = 3;
    while(1)
    {
        if(s/t*t==s) return 0;
        t += 2;
        if(t*t>s) return 1;
    }
}
//
//int main()
//{
//    int cnt, i, j, prime = 0;
//    int num[max], temp[max];
//    long long sum = 0;
//    while(scanf("%d", &cnt)!=EOF)
//    {
//        if(cnt<=1)
//        {
//            printf("0\n");
//            continue;
//        }
//        for(i=0; i<cnt; i++)
//        {
//            scanf("%d", &num[i]);
//        }
//        for(i=0; i<cnt-1; i++)
//        {
//            for(j=num[i]+1, prime=0; j<num[i+1]; )
//            {
//                if(j/2*2==j)
//                {
//                    j++;
//                    continue;
//                }
//                if(isprime(j)==1) prime++;
//                j += 2;
//            }
//            temp[i] = prime;
//        }
//        for(sum=0, i=0; i<cnt; i++)
//            sum += temp[i] * (i+1) * (cnt-1-i);
//        printf("%ld\n", sum);
//    }
//    return 0;
//}
