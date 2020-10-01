/*
 * Date: 10/01/2020
 * Author: jiachongliu
 * Times: 1
 */

class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            const int m = matrix.size();

            if (0 == m) return false;

            const int n = matrix[0].size();

            int left = 0, right = m * n - 1;
            int pivotIdx, pivotElement;

            while (left <= right) {
                pivotIdx = (left + right) / 2;
                pivotElement = matrix[pivotIdx / n][pivotIdx % n];

                if (pivotElement == target) return true;
                else {
                    if (target < pivotElement) right = pivotIdx - 1;
                    else left = pivotIdx + 1;
                }
            }

            return false;
        }
};
