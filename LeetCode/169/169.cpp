/*
Date: 08/23/2020
Author: jiachongliu
Title: 169. Majority Element
Times: 1
*/

class Solution {
public:
	   int majorityElement(vector<int>& nums) {
	   	   unordered_map<int, int> count;
	   	   int n = nums.size();

	   	   for (const int num : nums) {
	   	   	   if (++count[num] > n / 2) return num;
	   	   }

	   	   return -1;
	   }
}