#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    
    cout << " Printing the array " << endl;
    for(int i = 0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << " Printing is DONE " << endl;
}

int main(){
    //initialise entire arry with any number.
    // int num[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     num[i] = 5;
    //     cout << num[i] << endl;
    // }

    // int a[15];
    // cout << a[20] << endl;
    
    int h[5] = {0};//initialise entire arry with 0 it doesn't work for any other number.
    
    int fourth[15] = {1, 2};
    printArray(fourth , 5);

    int sizeofFifth = sizeof(fourth)/sizeof(int);
    cout << " Size of array " << sizeofFifth << endl;
}