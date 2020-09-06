/*
Date: 08/21/2020
Author: jiachongliu	
Title: 457. Circular Array Loop
Times: 1
*/

class Solution {
public:
	   bool circularArrayLoop(vector<int>& nums) {
	   	   int N = nums.size();

	   	   for (int i = 0; i < N; ++i) {
	   	   	   if (nums[i] == 0) continue;
	   	   	   int dir = nums[i] > 0 ? 1 : -1;
	   	   	   if (dfs(nums, i, N, dir)) return true;
	   	   }

	   	   return false;
	   }

	   bool dfs(vector<int>& nums, int i, int N, int dir) {
	   	   if (nums[i] == 0) return false;
	   	   if (nums[i] == INT_MAX) return true;

	   	   int ndir = nums[i] > 0 ? 1 : -1;
	   	   if (ndir == dir) {
	   	       int j = (N + (nums[i] + i) % N) % N;

	   	       nums[i] = INT_MAX;

	   	       if (j != i && dfs(nums, j, N, dir)) return true;
	   	       else {
	   	           nums[i] = 0;
	   	           return false;
	   	       }
	   	   }

	   	   return false;
	   }
};