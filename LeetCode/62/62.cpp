/*
Date: 08/12/2020
Author: jiachongliu
title: 62. Unique Paths
times: 1
*/

class Solution {
public:
	int uniquePaths(int m, int n) {
		vector<int> dp(m * n, 1);

		for (int i = 1; i < m; ++i) {
			for (int j = 1; j < n; ++j) {
				dp[j] += dp[j - 1];
			}
		}

		return dp[n - 1];
	}
};