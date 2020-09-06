/*
Date: 08/17/2020
Author: jiachongliu
Title: 643. Maximum Arverage Subarray I
Times; 1
*/


class Solution {
public:
	   double findMaxAverage(vector<int>& nums, int k) {
	   	   int n = nums.size();

	   	   vector<int> sums = nums;
	   	   for (int i = 1; i < n; ++i) {
	   	   	   sums[i] = sums[i - 1] + nums[i];
	   	   }

	   	   double mx = sums[k - 1];
	   	   for (int i = k; i < n; ++i) {
	   	   	   mx = max(mx, (double)sums[i] - sums[i - 1]);
	   	   }

	   	   return mx / 4;
	   }
};