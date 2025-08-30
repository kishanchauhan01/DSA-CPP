// https://www.geeksforgeeks.org/problems/queue-reversal/1

#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Solution {
   public:
    queue<int> reverseQueue(queue<int> &q) {
        // code here.
        stack<int> s;

        while (!q.empty()) {  // insert element into stack
            s.push(q.front());
            q.pop();
        }

        while (!s.empty()) {  // insert stack element into queue
            q.push(s.top());
            s.pop();
        }

        return q;
    }
};
