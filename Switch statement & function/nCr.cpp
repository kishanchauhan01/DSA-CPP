#include <iostream>
using namespace std;

int factorial(int n)
{

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);
    return num / denom;
}

int main()
{
    int x,y;
    cin >> x >> y;
    cout << "Answer is " << nCr(x, y) << endl;
}