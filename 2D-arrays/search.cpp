#include <bits/stdc++.h>
#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target){
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if(arr[row][col] == target) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    //creat 2-D array
    int arr[3][4];

    //Taking input row wise
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    //print
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    cout << endl;

    cout << " Enter the element to search:-) " << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target)){
        cout << "Element found" << endl;
    }
    else{
        cout << " Not found" << endl;
    }

    return 0;
}