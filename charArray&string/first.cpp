#include <bits/stdc++.h>
#include<iostream>
using namespace std;

char toLowercase(char ch){
    if(ch>='a' && ch<='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool check_palidrome(char a[], int n) {
    int s = 0;
    int e = n-1;
    
    while (s<=e)
    {
        if(a[s] != a[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

void reverse(char name[], int n) {
    int s = 0;
    int e = n-1;

    while (s<e)
    {
        swap(name[s++], name[e--]);
    }
    
}

int get_length(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];

    cout << "Enter your name:- " << endl;
    cin >> name;
    int len = get_length(name);
    reverse(name, len);
    cout << "length is" << len << endl;
    cout << "your name is:- " << name << endl;

    cout << "palidrome or not:- " << check_palidrome(name, len) << endl;
    cout << toLowercase('H') << endl;
    
    return 0;
}