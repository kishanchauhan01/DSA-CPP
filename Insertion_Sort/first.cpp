#include <bits/stdc++.h>

#include <iostream>
using namespace std;

void insersionSort(vector<int> &arr, int n) {
  for (int i = 0; i < n; i++) {
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > temp) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
}

int main() {
  vector<int> arr = {10, 1, 7, 4, 8, 2, 11};
  insersionSort(arr, arr.size());

  for (int i : arr) {
    cout << i << endl;
  }

  return 0;
}