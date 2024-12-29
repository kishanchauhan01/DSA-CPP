#include <bits/stdc++.h>
#include <iostream> 
using namespace std; 

int fibo(int n) {
    //Base case
    if (n == 0 || n == 1)
        return n;
    
    return fibo(n-1) + fibo(n-2);
}


int main() {
    int n,m;
    cout << "enter the starting point:-" << endl;
    cin >> n;
    // cout << "enter the ending point:-" << endl;
    // cin >> m;
    
    // int ans = fibo(n);//fibo of starting point

    while(n <= 20) {
        cout << fibo(n) << " ";
        n++;
    }
    cout << endl;

    // cout << ans1 << endl;

	return 0;
}