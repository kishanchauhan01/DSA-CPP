#include <iostream>
using namespace std;

void getMinMax(int num[], int n)
{
    int max = INT32_MIN, min = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    cout << "maximum value is " << max << endl;
    cout << "minimum value is " << min << endl;
}
// we can use max = num[0] and we have to use i = 1 in loop
// OR maxi = INT32_MIN and in the loop maxi = max(maxi, num[i]); this thing represent that if statement

int main()
{
    int size;
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    getMinMax(num, size);
}