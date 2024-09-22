#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    // int *p = 0;
    // cout << *p << endl;

    // int i = 5;
    // int *p = &i;
    // cout << p << endl;
    // cout << *p << endl;

    // // int *q = 0;
    // // q = &i;

    // // cout << q << endl;
    // // cout << *q << endl;

    // cout << "before" << i << endl;
    // (*p)++;
    // cout << "after" << i << endl;

    int num = 5;
    int *p = &num;
    cout << p << endl;

    cout << "before " << num << endl;
    (*p)++;
    cout << "after " << num << endl;
    
    cout << *p << endl;
    cout << p << endl;

    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    int i = 3;
    int *t = &i;

    // *t = *t + 1;
    
    // cout << (*t)++ << endl;

    cout << "before - " << t << endl;
    t = t + 1;
    cout << "after - " << t << endl;

    return 0;
}