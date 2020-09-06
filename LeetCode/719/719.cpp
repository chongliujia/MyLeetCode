/*
Date: 08/20/2020
Author: jiachongliu
Title: 719. Find K-th Smallest Pair Distance
Times: 1
*/


class Solution {
public:
	   int smallestDistancePair(vector<int>& nums, int k) {
	   	   sort(nums.begin(), nums.end());

	   	   const int N = nums.back();
	   	   vector<int> count(N + 1, 0); 

	   	   const int n = nums.size();
	   	   for (int i = 0; i < n; ++i) {
	   	   	   for (int j = i + 1; j < n; ++j) {
	   	   	   	   ++count[nums[j] - nums[i]];
	   	   	   }
	   	   }

	   	   for (int i = 0; i <= N; ++i) {
	   	   	   k -= count[i];
	   	   	   if (k <= 0) return i;
	   	   }

	   	   return 0;
	   }
};