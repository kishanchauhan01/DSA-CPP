#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<pair<int, int>> primeFactors(int n) {
    vector<pair<int, int>> ans;

    for(int i=2; i<=n; i++)
    {
        if(n%i == 0)
        {
            int cnt = 0;
            while (n%i==0)
            {
                cnt++;
                n = n/i;
            }
            ans.push_back({i, cnt});
        }
    }
    return ans;
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