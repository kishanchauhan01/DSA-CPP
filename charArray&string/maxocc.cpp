#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// time:- O(n) where  n is the lenght of the string
// space:- O(1)

char getMaxOcc(string s)
{
    int arr[26] = {0};

    // create an array of count of character
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // lowercase
        int number = 0;
        number = ch - 'a';
        cout << number << endl;
        arr[number]++;//matlab number vale index pe jo bhi value ho use increment dedo ek se.
    }
    // find maximum occ character
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }   

    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    string s;
    cout << "enter the string:-) " << endl;
    cin >> s;
    cout << getMaxOcc(s) << endl;
}