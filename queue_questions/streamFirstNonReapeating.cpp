// https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string FirstNonRepeating(string &s) {
    // Code here

    unordered_map<char, int> count;
    queue<int> q;
    string ans = "";

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        // increase count
        count[ch]++;

        // queue me push kardo
        q.push(ch);

        
        while (!q.empty()) {
            if (count[q.front()] > 1) {
                // repeating char
                q.pop();
            } else {
                // non-repeating char
                ans.push_back(q.front());
                break;
            }
        }

        if (q.empty()) {
            ans.push_back('#');
        }
    }

    for (auto i : count) {
        cout << i.first << ": " << i.second << endl;
    }

    return ans;
}

int main() {
    string word = "aabc";
    string result = FirstNonRepeating(word);
}