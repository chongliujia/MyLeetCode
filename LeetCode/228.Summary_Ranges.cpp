/*
 * Date: 10/02/2020
 * Author: jiachongliu
 * Times: 1
 */

class Solution {
    public:
        vector<string> summaryRanges(vector<int>& nums) {
            int s = 0;
            vector<string> ans;

            for (size_t i = 1; i <= nums.size(); ++i) {
                if (i == nums.size() || nums[i] != nums[i - 1] + 1) {
                    if (s == i - 1) ans.push_back(to_string(nums[s]));
                    else ans.push_back(to_string(nums[s]) + "->" + to_string(nums[i - 1]));
                    s = i;
                }
            }

            return ans;
        }
};
