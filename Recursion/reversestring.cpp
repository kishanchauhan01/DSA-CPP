#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void reverse(string& str, int i, int j) {

    //base case
    if(i>j) {
        return ;
    }

    swap(str[i], str[j]);
    i++;
    j--;
    reverse(str, i, j);

}

int main(){
    
    string name = "kishan";

    reverse(name, 0, name.length()-1);

    cout << name << endl;

    return 0;
}

// one pointer approach
// #include <bits/stdc++.h> 

// void reverse(string& str, int i, int n) {

//     //base case
//     if(i>n-i-1) {
//         return ;
//     }

//     swap(str[i], str[n-i-1]);
//     i++;

//     reverse(str, i, n);

// }

// string reverseString(string str)
// {
// 	reverse(str, 0, str.length());
// 	return str;
// }