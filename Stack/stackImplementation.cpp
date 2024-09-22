#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    //creation of stack
    stack<int> s;

    //push element
    s.push(2);
    s.push(2);
    
    

    //pop
    s.pop();

    if(s.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    return 0;
}