#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        for(int i=0;i<row; i++){
            for(int j=0; j<=i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0;i<row;i++){
            reverse(matrix.begin(), matrix.end());
        }
}

int main() {

    vector<vector<int>> vect {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for (int i = 0; i < vect.size(); i++) { 
        for (int j = 0; j < vect[i].size(); j++) 
        { 
            cout << vect[i][j] << " "; 
        }     
        cout << endl; 
    } 

    rotate(vect);

    cout << endl;


    for (int i = 0; i < vect.size(); i++) { 
        for (int j = 0; j < vect[i].size(); j++) 
        { 
            cout << vect[i][j] << " "; 
        }     
        cout << endl; 
    } 


    
    

    return 0;
}