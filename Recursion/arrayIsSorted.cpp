#include <bits/stdc++.h>
#include <iostream> 
using namespace std; 

bool isSorted(vector<int> arr, int i) {
    //base case
    if(i == arr.size()-1) 
        return 1;
    
    bool recursionResult = isSorted(arr, i+1);
    bool ans = recursionResult & arr[i] <= arr[i+1];
    return ans;
}

int main() {
    vector<int> arr = {2,4,8,9,9,15};
    int i = 0;
    int ans = isSorted(arr,i);
    cout << ans << endl;

	return 0; 
}
