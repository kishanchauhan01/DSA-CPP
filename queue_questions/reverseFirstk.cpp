#include <bits/stdc++.h>

#include <iostream>
using namespace std;

queue<int> reverseFirstK(queue<int> q, int k) {
    // code here

    // Step 1: pop first k from Q and put into stack
    stack<int> s;

    for (int i = 0; i < k; i++) {
        int val = q.front();
        q.pop();
        s.push(val);
    }

    // Step 2: fetch from stack and push into q
    while (!s.empty()) {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    // Step 3: fetch first (n-k) element from Q and push back

    int t = q.size() - k;

    while (t--) {
        int val = q.front();
        q.pop();
        q.push(val);
    }

    return q;
}

int main() {
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);

    queue<int> ans = reverseFirstK(qu, 3);

    while (!ans.empty()) {
        cout << ans.front() << " ";  // print front element
        ans.pop();                   // remove it
    }

    cout << "" << endl;

    return 0;
}