// geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Solution {
   public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int n = arr.size();

        deque<int> dq;
        vector<int> ans;

        // process first window of size k
        for (int i = 0; i < k; i++) {
            if (arr[i] < 0) {
                dq.push_back(i);
            }
        }

        // store the ans of first k sized window
        if (dq.size() > 0) {
            ans.push_back(arr[dq.front()]);
        } else {
            ans.push_back(0);
        }

        // proccess for remaining window
        for (int i = k; i < n; i++) {
            // removal of element from the window
            if (!dq.empty() && i - dq.front() >= k) {
                dq.pop_front();
            }

            // addition of element into the window
            if (arr[i] < 0) {
                dq.push_back(i);
            }

            // store the ans
            if (dq.size() > 0) {
                ans.push_back(arr[dq.front()]);
            } else {
                ans.push_back(0);
            }
        }

        return ans;
    }
};