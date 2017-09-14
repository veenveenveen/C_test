//
//  main.cpp
//  9
//
//  Created by 黄启明 on 2017/9/8.
//  Copyright © 2017年 Himin. All rights reserved.
//

//一个数组有 N 个元素，使用 快速排序 对其进行排序输出(本题还会人工阅卷,请使用快速排序算法进行排序)

#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &a, int low, int high) {
    
    int key = a[low];
    while (low < high) {
        while (low < high && a[high] >= key) {
            high--;
        }
        a[low] = a[high];
        while (low < high && a[low] <= key) {
            low++;
        }
        a[high] = a[low];
    }
    a[low] = key;
    return low;
    
//    int x = a[high];
//    int i = low - 1;
//    for(int j = low; j < high; j++) {
//        if (a[j] <= x) {
//            i++;
//            swap(a[i],a[j]);
//        }
//    }
//    swap(a[i+1],a[high]);
//    return i+1;
}

int part(vector<int> &v, int low, int high) {
    int key = v[low];
    while (low < high) {
        while (low < high && key <= v[high]) {
            high--;
        }
        v[low] = v[high];
        while (low < high && key >= v[low]) {
            low++;
        }
        v[high] = v[low];
    }
    v[low] = key;
    return low;
}

void qSort(vector<int> &a, int low, int higt) {
    if (low < higt) {
        int tmp = partition(a, low, higt);
        qSort(a, low, tmp-1);
        qSort(a, tmp+1, higt);
    }
}

int main(int argc, const char * argv[]) {
    
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    qSort(v, 0, n-1);
    
    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i != n-1) {
            cout << " ";
        }
    }
    
    return 0;
}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int Partition(vector<int> &A,int p,int r){
//    int x=A[r];
//    int i=p-1;
//    for(int j=p;j<=r-1;++j){
//        if(A[j]<=x){
//            ++i;
//            swap(A[i],A[j]);
//        }
//    }
//    swap(A[i+1],A[r]);
//    return i+1;
//}
//
//void QuickSort(vector<int> &A,int p,int r){
//    if(p<r){
//        int q=Partition(A,p,r);
//        QuickSort(A,p,q-1);
//        QuickSort(A,q+1,r);
//    }
//}
//
//int main(){
//    int n;
//    cin>>n;
//    vector<int> A(n);
//    for(int i=0;i<n;++i)
//        cin>>A[i];
//    QuickSort(A,0,n-1);
//    for(int i=0;i<n;++i){
//        cout<<A[i];
//        if(i!=n-1)
//            cout<<" ";
//    }
//}
