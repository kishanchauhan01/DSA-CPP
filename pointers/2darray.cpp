#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    // int n;
    // cin >> n;
    int row;
    cin >> row;
    int col;
    cin >> col;

    
    int** arr = new int*[row];
    for(int i=0; i<row; i++) {
        arr[i] = new int[col];
    }//creation done
    //taking i/p
    
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    //relasing the memory
    for(int i=0; i<row; i++) {
        delete [] arr[i];
    }

    delete []arr;
    cout << "memory deleted" << endl;
    cout << *arr << endl;

    return 0;
}