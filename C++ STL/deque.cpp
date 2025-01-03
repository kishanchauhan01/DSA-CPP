#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    deque<int> d;
    
    d.push_back(1);
    d.push_front(2);

    for(int i:d) {
        cout << i << " ";
    }cout << endl;

    // d.pop_back();
    // d.pop_front();
    // for(int i:d) {
    //     cout << i << " ";
    // }cout << endl;

    cout << "print first index element: " << d.at(1) << endl;

    cout << "front: " << d.front() << endl;
    cout << "back: " << d.back() << endl;

    cout << "empty or not: " << d.empty()<< endl;

    cout << "Before erase: " << d.size() << endl;
    d.erase(d.begin(), d.end());
    cout << "Before erase: " << d.size() << endl;


    return 0;
}