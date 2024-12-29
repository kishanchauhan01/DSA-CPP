#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;
    while(n!=0)
    {
        //checking last bit
        if(n&1){
            count++;
        }
        n = n >> 1;
    }
    cout << count << endl;
}
//https://leetcode.com/problems/number-of-1-bits/