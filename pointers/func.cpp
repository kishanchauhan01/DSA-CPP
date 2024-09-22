#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void update(int *p) {
    *p = *p + 2;

}

int main() {
    int arr[5] = {1,2,3,4};
    int *p = &arr[0];

    cout << "before - ";
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }cout << endl;

    update(p);
    cout << "after - ";
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }cout << endl;
    
    return 0;
    
}