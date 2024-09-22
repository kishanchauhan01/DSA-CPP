#include <bits/stdc++.h>
#include<iostream>
using namespace std;

//T.C:- O(n log(log underoot n))

vector<int> sieve(int n) {
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;

    for(int i=2; i*i<=n; i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j<=n; j+=i) {
                isPrime[j] = 0;
            }
        }
    }
    for(int i:isPrime){
        cout << isPrime[i];
    }cout << endl;
    return isPrime;
}

int main(){
    // vector<int> ans = sieve(400);
    //
    return 0;
    
}