#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
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

                    // Increment the count for this character
                    temp[c]++;
                    if (temp[c] > 1) {
                        tempLength = 1; // Duplicate character found
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

        return maxLength;
    }

    cout << maxLength << endl;

    return 0;
}


