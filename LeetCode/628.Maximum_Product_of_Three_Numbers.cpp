/*
 * Date: 09/22/2020
 * Author: jiachongliu
 * Times: 1
 */

class Solution {
    public:
        int maximumProduct(vector<int>& nums) {
            int n = nums.size();
            sort(nums.rbegin(), nums.rend());

            return max(nums[0] * nums[1] * nums[2], nums[0] * nums[n - 1] * nums[n - 2]);
        }
};
