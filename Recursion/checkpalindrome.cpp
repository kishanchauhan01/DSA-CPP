#include <bits/stdc++.h>
#include<iostream>
using namespace std;

bool checkPalidrome(string str, int i, int n) {
    //base case
    if(i>n-i-1)
        return true;
    
    if(str[i]!=str[n-i-1]) {
        return false;
    }
    else{
        return checkPalidrome(str, i+1, n);
    }
}

int main(){
    string name = "BookkooB";
    cout << endl;

    bool isPalindrome = checkPalidrome(name, 0, name.length());

    if(isPalindrome) {
        cout << "Its a  Palindrome" << endl;
    }
    else{
        cout << "Its not a Palindrome" << endl;
    }

    return 0;
}