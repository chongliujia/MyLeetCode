/*
 * Date: 09/18/2020
 * Author: jiachongliu
 * Times: 1
 */

class Solution {
    public:
        int getWinner(vector<int>& arr, int k) {
            int cur = arr[0];
            int cnt = 0;

            for (int i = 1; i < arr.size(); ++i) {
                if (arr[i] > cur) {
                    cur = arr[i];
                    cnt = 0;
                }

                if (++cnt == k) return cur;
            }

            return cur;
        }
};
