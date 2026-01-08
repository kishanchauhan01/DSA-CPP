#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    string s = "jumping foxes swiftly";
    int i = 0;

    int spaceCounter = -1;
    vector<int> charCounter(26, 0);
    vector<int> maxWord(3);
    int maxCharCounter = 0;

    while (i <= s.length()) {
        if (s[i] == ' ' || s[i] == '\0') {
            spaceCounter++;
            for (int j = 0; j < 26; j++) {
                if (charCounter[j] >= 2) {
                    maxCharCounter++;
                }
            }
            maxWord[spaceCounter] = maxCharCounter;
            charCounter.clear();
            charCounter.resize(26, 0);
            maxCharCounter = 0;
        }

        charCounter[s[i] - 'a']++;

        i++;
    }

    int maxWordCounter = -1;
    bool isEqualMax = true;

    for (int x : maxWord) {
        if (x != 0) {
            isEqualMax = false;
            break;
        }
    }

    if (!isEqualMax) {
        // finding msot repeating char from str
        for (int k = 0; k < maxWord.size(); k++) {
            if (maxWord[k] > maxWordCounter) {
                maxWordCounter = k;
            }
        }

        // finding most repeating char from str
        i = 0;

        while (maxWordCounter != 0) {
            if (s[i] == ' ') {
                maxWordCounter--;
            }
            i++;
        }

        // printing the most repeating char;
        while (s[i] != ' ') {
            cout << s[i];
            i++;
            if (s[i] == '\0') {
                break;
            }
        }

        cout << endl;

    } else {
        cout << -1 << endl;
    }

    return 0;
}