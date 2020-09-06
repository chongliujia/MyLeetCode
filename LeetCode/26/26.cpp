/*
Date: 08/11/2020
author: jiachongliu
title: 26. Remove Duplicates from Sorted Array
times: 1

*/
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int j = 0;
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] != nums[j]) {
				nums[++j] = nums[i];
			}
		}

		return nums.empty() ? 0 : j + 1;
	}
};