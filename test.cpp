#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    
    vector<int> arr = {1,2,1,3,2,5};
    vector<int> op;

    int ans = 0;
    for(int i=0; i<arr.size(); i++) {
        ans = ans ^ arr[i];
        // op.push_back(ans);
    }

    cout << ans << endl;

    return 0;
}