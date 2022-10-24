// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the minimum number
// of trials needed in the worst case
// with n eggs and k floors
int eggDrop(int n, int k)
{
	vector<vector<int> > dp(k + 1, vector<int>(n + 1, 0));

	int x = 0;

	// Fill all the entries in table using
	// optimal substructure property
	while (dp[x][n] < k) {

		x++;
		for (int i = 1; i <= n; i++)
			dp[x][i] = dp[x - 1][i - 1] + dp[x - 1][i] + 1;
	}

	// Return the minimum number of moves
	return x;
}

// Driver code
int main()
{
	int n = 2, k = 36;

	cout << eggDrop(n, k);

	return 0;
}
