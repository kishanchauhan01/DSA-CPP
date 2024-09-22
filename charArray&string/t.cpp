#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "There are two needles in this haystack with needles.";
    string str2 = "needle";

    // size_t found = str.find(str2);
    // cout << found << endl;

    str.replace(str.find(str2),str2.length(),"preposition");
    cout << str << endl;
}