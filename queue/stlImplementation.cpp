#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    // create a queue

    queue<int> q;

    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    cout << "Size of queue:- " << q.size() << endl;

    q.pop();//remove the front

    cout << "Size of queue:- " << q.size() << endl;

    if (q.empty()) {
        cout << "queue is empty" << endl;
    } else {
        cout << "queue is not empty" << endl;
    }

    cout << "Front of queue:- " << q.front() << endl;
    cout << "Back of queue:- " << q.back() << endl;

    return 0;
}