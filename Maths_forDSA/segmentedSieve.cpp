#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<bool> sieve(int n) {
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;

    for(int i=2; i*i<n; i++) {
        if(isPrime) {
            for(int j=i*i; j<=n; j+=1) {
                isPrime[j] = false;
            }
        }
    }

    return isPrime;
    
}

vector<bool> getPrimeInRange(long long L, long long R) {
    vector<bool> prime = sieve(sqrt(R));
    vector<bool> isPrime(R-L+1, true);

    for(long long i=2; i*i<=R; i++) {
        if(!isPrime) continue;
        for(long long j=max(i*i, (L+i-1)/i*i); j<=R; j+=i) {
            isPrime[j-L] = false;
        }
    }

    if(L == 1) isPrime[0] = false;
    return isPrime;
}

int main() {

    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    vector<pair<int, int>> ans = primeFactors(n);

    for(const auto &pair : ans) {
        cout << "(" << pair.first << ", " << pair.second << ") ";
    }

    return 0;
}