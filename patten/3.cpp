#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int col = row;
        // int value = row;
        while (col < row*2)
        {
            cout << col <<" ";
            // value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}