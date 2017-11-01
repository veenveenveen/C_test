//
//  main.cpp
//  50-输出r的n次方
//
//  Created by 黄启明 on 2017/9/23.
//  Copyright © 2017年 Himin. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

void func(int a,int *b) {
    a++;
    cout << b << endl;
    b++;
    (*b)++;
    cout << b << endl;
}

int main(int argc, const char * argv[]) {
    int x[2] = {2,4};
    int *p = &x[0];
    func(x[0], p);
    cout << p << endl;
    cout << x[0] << " " << x[1] << endl;
    
    int **q;
    int *s;
    int k = 20;
    cout << "&k = " << &k << endl;
    s = &k;
    cout << "s = " << s << endl;
    q = &s;
    cout << "&s = " << &s << endl;
    cout << "q = " << &s << endl;
    
    cout << "*q = " << *q << endl;
    cout << **q << endl;

//    double R;
//    int n;
//    cin >> R >> n;
//    double res = ((95.123*95.123*95.123)*(95.123*95.123*95.123))*((95.123*95.123*95.123)*(95.123*95.123*95.123)q);
    
    
//    for (int i = 1; i < n; i++) {
//        res *= res;
//    }
    
//    printf("%lf\n",res);
//    cout << res << endl;
    ///Users/himin/Desktop/项目/swift项目/test/test000/50-输出r的n次方/main.cpp:32:10: Multiple unsequenced modifications to 'i'
//    int i = 0;
//    i += i > 0 ? i++ : i--;
////    i += i > 0 ? i++ : i--;
////    i = i--;
////    i = i--;
//    cout << i << endl;
    
    
    
    return 0;
}
