#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int s = 5;

    // arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(5);

    arr.push_back(min(5, 6));

    for (int i : arr)
    {
        cout << i << " ";
    }
}