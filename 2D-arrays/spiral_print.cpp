//Time complexity O(m*n)
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row*col;

        //index initialisation
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col - 1;

        while(count < total) {

            //printing starting row
            for(int index = startingCol; count < total && index<=endingCol; index++) {
                ans.push_back(matrix[startingRow][index]);
                cout << matrix[startingRow][index] << " ";
                count++;
            }cout << endl;
            startingRow++;

            //printing ending col
            for(int index = startingRow; count < total && index<=endingRow; index++) {
                ans.push_back(matrix[index][endingCol]);
                cout << matrix[index][endingCol] << " ";
                count++;
            }cout << endl;
            endingCol--;

            //printing endigcol to starting col means endingrow
            for(int index = endingCol; count < total && index>=startingCol; index--) {
                ans.push_back(matrix[endingRow][index]);
                cout << matrix[endingRow][index] << " ";
                count++;
            }cout << endl;
            endingRow--;

            //printing startingrow
            for(int index = endingRow; count < total && index>=startingRow; index--) {
                ans.push_back(matrix[index][startingCol]);
                cout << matrix[index][startingCol] << " ";
                count++;
            }cout << endl;
            startingCol++;
        }
        cout << endl;

        return ans;
    }
};