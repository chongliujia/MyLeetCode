/*
Date: 08/12/2020
Author: jiachongliu
Title: 1343. Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
Times: 1
*/

class Solution {
public:
	int numOfSubarrays(vector<int>& arr, int k, int threshold) {
		int n = arr.size();
		int sum = 0;
		int ans = 0;

		for (int i = 0; i < n; ++i) {
			sum += arr[i];

			if (i + 1 >= k) {
				if (threshold * i <= sum) ans++;
				sum -= arr[i + 1 - k];
			}
		}

		return ans;
	}
}