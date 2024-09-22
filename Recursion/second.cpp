#include <bits/stdc++.h>
#include <iostream> 
using namespace std; 

int power(int n) {
    // base case
    if(n == 0) 
        return 1;
    
    int smallPrb = power(n-1);
    int bigprb = 2 * smallPrb;
    
    return bigprb;
}

int main() {

    int n; 
    cin >> n;

    int ans = power(n);

    cout << ans << endl;

	return 0; 
}
