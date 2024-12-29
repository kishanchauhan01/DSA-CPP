#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // 123 = 1^3 + 2^3 + 3^3
    int n;
    cout << "enter number:- " << endl;
    cin >> n;
    int m = n;
    int q = n;
    int digit = 0;
    while(n > 0) {
        n = n / 10;
        digit++;
    }
    cout << digit << endl;

    int sum = 0;
    while(m > 0) {
        int lnum = m % 10;
        sum += pow(lnum, digit);
        m = m / 10;

    }

    cout << sum << endl;

    if (q == sum) {
        cout << "yes it is armstrong number" << endl;
    } 
    else {
        cout << "no it is not a armstrong number" << endl;
    }

    return 0;
}