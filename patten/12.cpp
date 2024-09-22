#include <iostream>
using namespace std;

int main()
{
    // n-i+1
    /*int n;
    cin >> n;

    int i = 1;

    while(i <= n)
    {
        int j = 1;
        while(j <= n - i + 1)
        {
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    */

    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1, space = 1;
        while (space < i)
        {
            cout << " ";
            space++;
        }
        while (j <= n - i + 1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}