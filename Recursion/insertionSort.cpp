#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void insertionSort(int* arr, int n, int i) {
    //base case
    if(i>=n)
        return ;
    
    int temp = arr[i];
    int j = i-1;
    for( ; j>=0; j--) {
        //shift or insert
        if(arr[j] > temp)
            arr[j+1] = arr[j];
        else
            break;
    }
    arr[j+1] = temp;

    insertionSort(arr, n, i+1);
}

int main(){
    int arr[] = {64,25,12,22,11,50,1,0,65,42};
    int size = sizeof(arr)/sizeof(int);

    insertionSort(arr, size, 0);

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }cout << endl;
}