#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    //create a queue
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "Size of queue:" << q.size() << endl;
    q.pop();
    cout << "Size of queue:" << q.size() << endl;

    cout << "Front of queue is: " << q.front() << endl;
    


    return 0;
}