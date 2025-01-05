#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
        string s = "pwwkew";

        if (s.empty()) {
            return 0;
        }

        int n = s.length();
        int maxLength = 0;

        for (int i = 0; i < n; i++) {
            int k = i + 1;
            while (k <= n) {
                string sub = s.substr(i, k - i);
                int temp[128] = {0}; // Support all ASCII characters
                int tempLength = 0;

                for (int j = 0; j < sub.length(); j++) {
                    char c = sub[j];

                    temp[c]++;
                    if (temp[c] > 1) {
                        tempLength = 1;
                        break;
                    } else {
                        tempLength++;
                    }
                }

                // Update the maximum length
                if (tempLength > maxLength) {
                    maxLength = tempLength;
                }

                k++;
            }
        }

    cout << maxLength << endl;

    return maxLength;

}



