// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the count of unset
// bits in the binary representation of
// all the numbers from 1 to n
int countUnsetBits(int n)
{

	// To store the count of unset bits
	int cnt = 0;

	// For every integer from the range [1, n]
	for (int i = 1; i <= n; i++) {

		// A copy of the current integer
		int temp = i;

		// Count of unset bits in
		// the current integer
		while (temp) {

			// If current bit is unset
			if (temp % 2 == 0)
				cnt++;

			temp = temp / 2;
		}
	}
	return cnt;
}

// Driver code
int main()
{
	int n = 5;

	cout << countUnsetBits(n);

	return 0;
}
