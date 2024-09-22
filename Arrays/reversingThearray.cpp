#include <iostream>
using namespace std;

void reverse(int vrr[], int n)
{
    int start = 0;
    int end = n - 1;

    while(start <= end)
    {
        swap(vrr[start], vrr[end]);
        start++;
        end--;
    }
}

void printArray(int krr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << krr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[6] = {1, 4, 0, 5, -2, 15};
    int brr[5] = {2, 6, 3, 9, 4};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
}
