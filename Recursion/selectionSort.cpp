#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void slectionSort(int* arr, int n, int i) {
    //base case
    if(i>=n-1)
        return ;

    //solving first case
    int minIndex = i;
    for(int j = i+1; j<n; j++) {
        if(arr[j] < arr[minIndex]){
            minIndex = j;
        }
    }
    
    //processing
    swap(arr[minIndex], arr[i]);

    //recursive call
    slectionSort(arr, n, i+1);

}

int main(){
    int arr[] = {64,25,12,22,11,50,1,0,65,42};
    int size = sizeof(arr)/sizeof(int);
    slectionSort(arr, size, 0);

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }cout << endl;
}