// Mearge sort with index okay

//https://www.naukri.com/code360/problems/merge-sort_920442?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_14
#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid = s+(e-s)/2;
    int mid2 = mid + 1;

    while( s<=mid && mid2 <= e){
        if(arr[s] < arr[mid2]){
            s++;
        }
        else{
            int temp = arr[mid2];
            int mid_temp= mid2;

            // shift kri nakha mara logic thi
            while(mid_temp != s){
                arr[mid_temp] = arr[mid_temp-1];
                mid_temp--;
            }
            
            arr[s] = temp;
            mid++,s++;
            mid2++;
        }
    }
}

void mergeSort(int *arr,int s,int e){
    if(s>=e) return;
    int mid = s+(e-s)/2;

    mergeSort(arr,s,mid);

    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}

int main(){
    int arr[17] = {43,5,3,5,7,8,89,34,56,23,43,62,73,43,22,23,47};
    // int arr[6] = {1,25,40,10,2,3};
    int n=sizeof(arr)/sizeof(int);

    mergeSort(arr,0,n-1);

    // now array is sorted
    for(int i=0 ; i<n ; i++)
        cout << arr[i] << " ";
}