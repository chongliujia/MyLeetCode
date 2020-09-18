/*
 * Data: 09/18/2020
 * Author: jiachongliu
 * Times: 1
 */

class Solution {
    public:
        int maxDistance(vector<int>& position, int m) {
            sort(position.begin(), position.end());

            int hi = (position[position.size() - 1] - position[0]) / (m - 1);
            int lo = 1;
            int ans = 1;

            while (lo <= hi) {
                int mid = lo + (hi - lo) / 2;

                if (check(position, mid, m)) {
                    ans = mid;
                    lo = mid + 1;
                }
                else hi = mid - 1;
            }

            return ans;
        }

        bool check(vector<int>& position, int distance, int m) {
            int count = 1;
            int i = 0;

            for (int j = 1; j < position.size(); ++j) {
                if (position[j] - position[i] >= distance) {
                    i = j;
                    count++;
                    if (count >= m) return true;
                }
            }

            return false;
        }

};
