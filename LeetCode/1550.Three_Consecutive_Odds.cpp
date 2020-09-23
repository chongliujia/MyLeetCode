/*
 * Date: 09/23/2020
 * Author: jiachongliu
 * Times: 1
 */

class Solution {
    public:
        bool threeConsecutiveOdds(vector<int>& arr) {
            const int n = arr.size();
            int num = 0;

            for (int i = 0; i < n; ++i) {
                if (arr[i] % 2 != 1) {
                    num = 0;
                    continue;
                }

                num += 1;
                if (num == 3) return true;
            }

            return false;
        }
};
