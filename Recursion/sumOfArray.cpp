#include <bits/stdc++.h>
#include <iostream> 
using namespace std; 

int isSum(int* arr, int size) {
    //base case
    if(size == 0) {//edge case when arr is size is zero
        return 0;
    }
    if(size == 1) {
        return arr[0];
    }

    int remainingPart = isSum(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main() {
    int arr[5] = {2,2,4,5,9};
    int size = 5;
    int i = 0;
    int sum = isSum(arr, size);

    cout << sum << endl;

	return 0; 
}
