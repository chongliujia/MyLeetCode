/*
Date: 08/13/2020
Author: jiachongliu
Title: 1051. Height Checker
Times: 1
*/

class Solution {
public:
	   int heightChecker(vector<int>& heights) {
	   	   int n = heights.size();

	   	   vector<int> reheights = heights;

	   	   sort(heights.begin(), heights.end());

	   	   int count;
	   	   for (int i = 0; i < n; ++i) {
	   	   	   if (heights[i] != reheights[i]) count++;
	   	   }

	   	   return count;
	   }
}