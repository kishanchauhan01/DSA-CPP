#include <bits/stdc++.h>
#include<iostream>
using namespace std;

//To print row wise sum
void printSum(int arr[][3]){
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
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

    printSum(arr);

    return 0;
}

