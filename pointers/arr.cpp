#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    /*int arr[10] = {1,6,3,4};
    cout << "address of first memory block is " << arr << endl;
    cout << "address of first memory block is " << &arr[0] << endl;
    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr+1) << endl;
    cout << "6th " << *(arr)+2 << endl;
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int i = 2;

    cout << i[arr] << endl;*/

    // int temp[10];
    // cout << sizeof(temp) << endl;

    // int *ptr = &temp[0];
    // cout << sizeof(ptr) << endl;
    // cout << sizeof(*ptr) << endl;

    int a[20] = {1,2,3,4,5};
    cout << " ->" << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << " ->" << &p << endl;

    

    return 0;
}