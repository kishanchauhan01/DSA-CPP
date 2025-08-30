#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    deque<int> d;

    d.push_front(12);
    d.push_back(11);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_back();

    cout << d.front() << endl;
    cout << d.back() << endl;

    return 0;
}