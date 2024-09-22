#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void insersionSort(vector<int> &arr, int n) {
    for(int i=0; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for( ; j>=0; j--) {
            if(arr[j] > arr[j+1]) {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main() {
    vector<int> arr = {4,12,11,20};
    insersionSort(arr, arr.size());

    for(int i: arr){
        cout << i << endl;
    }

    return 0;
}