#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// int& func(int a) {
//     int num = a;
//     int& ans = num;
//     cout << "ans" << &ans << endl;
//     return ans;
// }//This is a bed practice because num and ans is local variables

// int* func(int n) {
//     int* ptr = &n;
//     cout << ptr << endl;
//     return *ptr;
// }

void update2(int& k){
    k++;
}

void update1(int n){
    n++;
}

int main(){
    
    
    // int i = 5;
    // //create a ref variable 

    // int& j = i;

    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << j << endl;
    

    int n =5;
    cout << "Before " << n << endl;
    update2(n);
    cout << "after " << n << endl;
    
    cout << "original n address" << &n << endl;
    cout << func(n) << endl;
    cout << n << endl;

    return 0;
}