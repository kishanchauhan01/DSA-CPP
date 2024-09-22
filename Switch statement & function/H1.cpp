// bits in an integer
#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
	int count = 0;
	while (n) {
		count += n & 1;
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


