#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int isUnique(int arr[], int n) {
    int unique = 0;
    sort(arr, arr+n);

    for(int i = 0; i<n; i++)
    {
        if(arr[i] == arr[i+1])
        {
            i++;
        }
        else{
            unique = arr[i];
        }
    }
    return unique;
}

int main(){
    int arr[] = {1,2,2,1,1,3};
    int n = sizeof(arr)/sizeof(int);
    
    cout << " Unique Element: " << isUnique(arr, n) << endl;
    
    /*sort(arr, arr+n);
    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    */
    return 0;
}