#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1,2,3,5,9};
    for(int i=0; i<1; i++) {
        a.at(2) = 5;
    }
    for(int i:a) {
        cout << i << " ";
    }
    cout << endl;
}