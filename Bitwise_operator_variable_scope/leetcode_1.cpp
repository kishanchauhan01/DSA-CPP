#include<iostream>
using namespace std;

int main(){
// Given an integer number n, return the dfference b/w the product of its digits and the sum of its digits.
    
    int n;
    cin >> n;

    int prod = 1;
    int sum = 0;

    while (n!=0)
    {
        int digit = n%10;
        prod = prod * digit;
        sum = sum + digit;
        n /= 10;
    }
    int ans = prod - sum;
    cout << ans << endl;
    
}