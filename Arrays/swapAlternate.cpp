#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n) {
    int first = 0;
    int second = 1;

    while (second <= n)
    {
        swap(arr[first], arr[second]);
        first+=2;
        second+=2;
    }

}

void printArray(int arr[], int n) {
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int num[6] = {1,2,3,4,5,6};

    int numlength = sizeof(num)/sizeof(int);

    swapAlternate(num, numlength);
    printArray(num, numlength);
}

/*
#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
// if swap() is not work in some online test ---->
//temp = arr[0];
//arr[0] = arr[1];
//arr[1] = temp;
int main()
{
    int even[8] = {5, 2, 4, 8, 9, 6, 10, 12};
    // int odd[5] = {1, 4, 2, 3, 13};

    swapAlternate(even, 8);
    printArray(even, 8);

    // swapAlternate(odd, 5);
    // printArray(odd, 5);
}*/
