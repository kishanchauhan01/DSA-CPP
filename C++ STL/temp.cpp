#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    vector<int> arr(26, 0);
    cout << arr.size() << endl;
    arr.push_back(1);
    cout << arr.at(0) << endl;

    arr.clear();
    
    cout << "size " << arr.size() << endl;
    arr.assign(26, 0);
    cout << arr.at(2) << endl;
    cout << "size " << arr.size() << endl;

    return 0;
}