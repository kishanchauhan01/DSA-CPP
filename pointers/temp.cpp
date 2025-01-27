#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int change(int arr[3]) {
    arr[2] = 4;
    return arr[2];
}

int main(){
    int arr[3] = {1,2,3};
    int num = change(arr);
    cout << arr[2] << endl;

    return 0;
}