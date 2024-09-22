#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int largerowSum(int arr[][3]){
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return rowIndex;
}

int main() {

    int arr[3][3];

    cout << "Enter the elements " << endl;
    //taking input --> row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }

    //print 
    cout << "Printing the array" << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    cout << endl;

    int ans = largerowSum(arr);
    cout << "max row at index " << ans << endl;

    return 0;
}   