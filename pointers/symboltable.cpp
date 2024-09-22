#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int arr[10];
    // arr = arr + 1;
    int *p = &arr[0];
    cout << "before 0th -> " << p << endl;
    cout << "before 1st-> " << (p+1) << endl;
    cout << "before 9thst-> " << (p+9) << endl;
    p = p + 1;
    cout << "after 0th-> " << p << endl;
    cout << "after 1st-> " << (p+1) << endl;
    cout << "after 9th-> " << (p+9) << endl;

    cout << "after 10th-> " << (p+10) << endl;

    return 0;
}