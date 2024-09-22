#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    // cout << "hi";
    while (i <= n)
    {
        int num = n+1;
        int j = 1, space = 1;
        while (space <= i - 1)
        {
            cout << " ";
            space++;
        }
        while (j <= n - i + 1)
        {
            cout << num - i;
            num--;
            j++;
        }
        cout << endl;
        i++;
    }
}