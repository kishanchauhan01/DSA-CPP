//https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    queue<int> rearrangeQueue(queue<int> q) {
        // code here
        int n = q.size()/2;
        queue<int> firstHalf;
        
        for(int i=0; i<n; i++) {
            int val = q.front();
            q.pop();
            firstHalf.push(val);
        }
        
        while(!firstHalf.empty()) {
            int val = firstHalf.front();
            firstHalf.pop();
            q.push(val);
            val = q.front();
            q.pop();
            q.push(val);
        }
        
        return q;
    }
};