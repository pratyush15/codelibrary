// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the count of
// set bits in all the integers
// from the range [1, n]
int countSetBits(int n)
{

	// To store the required count
	// of the set bits
	int cnt = 0;

	// To store the count of set
	// bits in every integer
	vector<int> setBits(n + 1);

	// 0 has no set bit
	setBits[0] = 0;

	for (int i = 1; i <= n; i++) {

		setBits[i] = setBits[i >> 1] + (i & 1);
	}

	// Sum all the set bits
	for (int i = 0; i <= n; i++) {
		cnt = cnt + setBits[i];
	}

	return cnt;
}

// Driver code
int main()
{
	int n = 6;

	cout << countSetBits(n);

	return 0;
}
