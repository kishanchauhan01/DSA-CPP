#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
    //creat 2-D array
    int arr[3][4];
    // int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,14,16};
    // int arr1[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};000

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout << arr1[i][j] << " ";
    //     }cout << endl;
    // }

    //Taking input row wise
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++) {
            cin >> arr[i][j];
        }
    }

    //Taking input column wise
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<3; j++){
    //         cin >> arr[j][i];
    //     }
    // }

    //print
    for(int j=0; j<4; j++){
        for(int i=0; i<3; i++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    cout << endl;


    return 0;
}