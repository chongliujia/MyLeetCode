/*
Date: 09/03/2020
Author: jiachongliu
Title: 978. Longest Turbulent Subarray
Times: 1
*/

class Solution {
public:
	   int maxTurbulenceSize(vector<int>& A) {
	   	   int n = A.size();
	   	   vector<int> up(n, 1);
	   	   vector<int> down(n, 1);

	   	   int ans = 1;
	   	   for (int i = 1; i < n; ++i) {
	   	   	   if (A[i] > A[i - 1]) down[i] = up[i - 1] + 1;
	   	   	   if (A[i] < A[i - 1]) up[i] = down[i - 1] + 1;
	   	   	   ans = max(ans, max(up[i], down[i]));
	   	   }

	   	   return ans;
	   }
}