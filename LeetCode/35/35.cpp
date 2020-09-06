/*
Date: 08/17/2020
Author: jiachongliu
Title: 35.Search Insert Position
Times: 1
*/

class Solution {
public:
	   int searchInsert(vector<int>& nums, int target) {
	   	   int n = nums.size();

	   	   if (n == 0) return 0;
	   	   if (nums[n - 1] < target) return n;

	   	   int left = 0, right = n - 1;
	   	   while (left < right) {
	   	   	   int mid = left + (right - left) / 2;

	   	   	   if (nums[mid] < target) left = mid + 1;
	   	   	   else right = mid;
	   	   }

	   	   return left;
	   }
};