#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        //1st triangle
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }

        //2nd triangle
        j = 1;
        int num = 1;

        while(j <= 2*i-2)
        {
            cout << "*";
            num++;
            j++;
        }

        //3rd triangle
        num = n+1;
        j = 1;

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

