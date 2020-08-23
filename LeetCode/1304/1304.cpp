/*
Date: 08/23/2020
Author: jiachongliu
Title: 1304. Find N Unique Integers Sum up to Zero
Times: 1
*/

class Solution {
public:
	   vector<int> sumZero(int n) {
	   	   vector<int> res;

	   	   for (int i = 1; i <= n/2; ++i) {
	   	   	   res.push_back(-i);
	   	   	   res.push_back(i);
	   	   }

	   	   if (res.size() != n) res.push_back(0);
	   	   return res;
	   }
}