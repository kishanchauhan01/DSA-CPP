#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cout << "how many number you want to add" << endl;
    cin >> n;

    int* arr = new int[n];

    int max = 0;
    int min = 0;
    for(int i=0; i<n; i++) {
        cout << "now enter number :" << i << endl;
        cin >> arr[i];
        if(i >= 1) {
            if(arr[0] > arr[1]) {
                max = arr[0];
            }
            else if(arr[0] < arr[1]) {
                min = arr[0];
            }
            if(arr[i] > max) {
                max = arr[i];
                // cout << "max is" << max;
            }
            if(arr[i] < min) {
                min = arr[i];
                // cout << "min is" << min;
            }
            if(arr[i] < 0) {
                min = arr[i];
            }
        }

    }

    cout << "max" << max << endl;
    cout << "min" << min << endl;




    return 0;
}