#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1, space = 1;
        while (space <= n - i)
        {
            cout << " ";
            space++;
        }
        while (j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}