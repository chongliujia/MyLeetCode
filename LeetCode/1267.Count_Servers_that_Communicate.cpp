/*
 * Date: 10/06/2020
 * Author: jiachongliu
 * Times: 1
 */

class Solution {
    public:
        int countServers(vector<vector<int>>& grid) {
            int m = grid.size();
            int n = grid[0].size();

            vector<int> countM(m), countN(n);
            for (int i = 0; i < m; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (grid[i][j] == 1) {
                        ++countM[i];
                        ++countN[j];
                    }
                }
            }

            int ans = 0;
            for (int i = 0; i < m; ++i) {
                for (int j = 0; j < n; ++j) {
                    if ((grid[i][j] == 1) && (countM[i] > 1 || countN[j] > 1)) ++ans;
                }
            }

            return ans;
        }
};
