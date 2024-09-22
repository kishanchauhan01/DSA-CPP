#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,5, 5, 5, 2};
    vector<int> ans;
    int sum = 12;
    int temp = 0;
    int n = sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for (int k=j+1; k<n; k++) {
                if((arr[i] + arr[j] + arr[k]) == sum) 
                {
                    temp = 1;
                    ans.push_back(arr[i]);       
                    ans.push_back(arr[j]);       
                    ans.push_back(arr[k]);
                    break;   
                }
            }
            if(temp == 1)
                break;
        }
        if(temp == 1)
            break;
    }
    for(int i:ans) {
        cout << i << " ";
    }cout << endl;
}