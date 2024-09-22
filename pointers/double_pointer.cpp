#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void update(int **p) {
    // p = p + 1;
    //nothing is happening

    // *p = *p + 1;
    //here is change

    **p = **p + 1;
    
}

int main(){
    int i = 5;
    int* p = &i;
    int** p2 = &p;

    // cout << "Printing p " << p << endl;
    // cout << "address of p " << &p << endl;

    // cout << *p2 << endl;

    // cout << i << endl;
    // cout << *p << endl;
    // cout << **p2 << endl;

    // cout << &i << endl;
    // cout << p << endl;
    // cout << *p2 << endl;

    // cout << &p << endl;
    // cout << p2 << endl;

    cout << endl;
    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << p2 << endl;
    update(p2);
    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;
    cout << endl;
    
    return 0;
}