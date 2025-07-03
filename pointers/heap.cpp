#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int getsum(int* arr, int n) {
    cout << *arr << endl;
    cout << arr << endl;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    // variable size array
    int* arr = new int[n];

    // taking input in array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = getsum(arr, n);

    cout << "answer is " << ans << endl;

    delete[] arr;
    // while (true)
    // {
    //     // cout << "hi" << endl;
    //     int* ptr = new int;
    // }

    return 0;
}