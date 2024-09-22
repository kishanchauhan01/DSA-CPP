#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int n) {
  for (int i = 1; i < n; i++) {
    // for round 1 to n-1
    bool swapped = false;
    for (int j = 0; j < n - i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false) 
            break;
    }
}
int main() {
    vector<int> arr = {10,1,7,6,14,9};
    bubbleSort(arr, arr.size());
    for(int i=0; i<arr.size(); i++) {
        cout << arr[i]<< ',';
    }cout << endl;
    return 0;
}
/*Bubble Sort is an example of a comparison-based sorting algorithm. A comparison-based sorting algorithm is a type of sorting algorithm that works by comparing pairs of elements in the input data and swapping them if they are in the wrong order. The goal is to rearrange the elements in ascending or descending order.

Bubble Sort is a comparison-based sorting algorithm because it sorts elements by comparing them pairwise and then making decisions based on those comparisons to rearrange the elements.*/