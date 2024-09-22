// bits in an integer
#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
	int count = 0;
	while (n!=0) {
        if(n&1 > 0) {
            count++;
        }
        n >>= 1;
	}
	return count;
}


int main()
{
	int i, j;
    cin >> i;
	cout << countSetBits(i) << endl;
	return 0;
}


