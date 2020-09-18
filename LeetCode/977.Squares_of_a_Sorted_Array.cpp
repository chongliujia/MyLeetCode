/*
 * Date: 09/18/2020
 * Author: jiachongliu
 * Times: 1
 */

class Solution {
    public:
        vector<int> sortedSquares(vector<int>& A) {
            vector<int> B;

            for (int x : A) {
                B.push_back(x * x);
            }

            sort(B.begin(), B.end());

            return B;
        }
};
