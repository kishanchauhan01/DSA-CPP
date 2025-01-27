#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];
    cout << *(c+1) << endl;//prints entire string

    // char f = 'z';
    // char *p = &f;
    // cout << p << endl;
    
    char b[10] = "kishan";
    cout << b << endl;

    char *po = "abcd";
    cout << *po << endl;
    cout << po << endl;
    cout << &po << endl;
    po = "efgh";
    cout << po << endl;
    po++;
    cout << po << endl;

    // char a[10] = "hello";
    // cout << &a << endl;


    // char *k = "a";
    // cout << k << endl;
    // k++;
    // cout << k << endl;
}
