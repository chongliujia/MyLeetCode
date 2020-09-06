/*
Date: 08/13/2020
Author: jiachongliu
Title: 1144. Decrease Elements To Make Array Zigzag
Times: 1
*/

class Solution {
public:
	   int movesToMakeZigzag(vector<int>& nums) {
	   	   int n = nums.size();
	   	   int ans1 = 0, ans2 = 0;

	   	   for (int i = 1; i < n - 1; ++i) {
	   	   	   if (i % 2 == 0) {
	   	   	   	   ans1 += max(0, nums[i] + 1 - min(nums[i - 1], nums[i + 1]));
	   	   	   }

	   	   	   if (i % 2 == 0) {
	   	   	   	   ans2 += max(0, nums[i] + 1 - min(nums[i - 1], nums[i + 1]));
	   	   	   }
	   	   }

	   	   ans1 += max(0, nums[0] - nums[1] + 1);

	   	   if ((n - 1) % 2 == 0) ans1 += max(0, nums[n - 1] - nums[n - 2] + 1);
	   	   else ans2 += max(0, nums[n - 1] - nums[n - 2] + 1);

	   	   return min(nums1, nums2);
	   }
};