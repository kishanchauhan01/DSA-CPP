#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {
    
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s<=e)
    {
        if(arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right vale part me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//Left vale part me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {
    
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s<=e)
    {
        if(arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right vale part me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//Left vale part me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    
    int even[7] = {1,2,3,3,3,3,5};

    cout << " First Occurrence of 3 is at index " << firstOcc(even, 7, 3) << endl;
    cout << " Last Occurrence of 3 is at index  " << lastOcc(even, 7, 3) << endl;

    return 0;
}
// Find no. of occurrence of 3 in {1,2,3,3,3,3,5}
// first occ- at index 2 and last occ- at index 5, therefore no. of occ = (last occ - frst occ) + 1;
// total = (5-2) + 1;


#include <bits/stdc++.h> 
int binaryleft(vector<int>&arr,int s,int e,int k ,int ans ){
    if(s>e)
        return ans;
    
    int mid = s+(e-s)/2;
    if(arr[mid] == k ){
        // e = mid - 1 thay ne
        return binaryleft(arr, s, mid - 1, k, mid);
    }
    else if(arr[mid] < k){
        // s = mid + 1;
        return binaryleft(arr, mid+1, e, k, ans);
    } else {
        // e = mid + 1;
        return binaryleft(arr, s, mid - 1, k, ans);
    }
}

int binaryright(vector<int>&arr,int s,int e,int k ,int ans ){
    if(s>e) 
        return ans;
    
    int mid = s+(e-s)/2;
    if(arr[mid] == k ){
        // e = mid - 1 thay ne
        return binaryright(arr, mid + 1, e, k, mid);
    }
    else if(arr[mid] < k){
        // s = mid + 1;
        return binaryright(arr, mid+1, e, k, ans);
    } else {
        // e = mid + 1;
        return binaryright(arr, s, mid - 1, k, ans);
    }
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int s=0,e=n-1;
    int mid = s+(e-s)/2;

    pair<int,int> p;
    p.first = binaryleft(arr,s,e,k,-1);
    p.second = binaryright(arr,s,e,k,-1);

    return p;
}