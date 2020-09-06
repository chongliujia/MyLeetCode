/*
Date: 08/27/2020
Author: jiachongliu
Title: 867. Transpose Matrix
Times: 1
*/

class Solution {
public:
	   vector<vector<int>> transpose(vector<vector<int>>& A) {
	   	   int R = A.size(), C = A[0].size();
	   	   vector<vector<int>> B(C, vector<int>(R, 0));

	   	   for (int i = 0; i < R; ++i) {
	   	   	   for (int j = 0; j < C; ++j) {
	   	   	   	   B[j][i] = A[i][j];
	   	   	   }
	   	   }

	   	   return B;
	   }
};