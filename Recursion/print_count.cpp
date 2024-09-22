#include <bits/stdc++.h>
#include <iostream> 
using namespace std; 

void print(int n) {
    //base case
    if(n == 0) {
        return ;
    }

    // cout << n << endl; //Tail recursion

    //recursion rleation
    print(n-1);

    cout << n << endl; //Head recursion
    
}

int main() {

    int n;
    cin >> n;
    cout << endl;

    print(n);

	return 0; 
}
