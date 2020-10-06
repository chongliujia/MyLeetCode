/*
 * Date: 10/06/2020
 * Author: jiachongliu
 * Times: 1
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
    public:
        int closestValue(TreeNode* root, double target) {
            int value      = 0;
            double minDist = LONG_MAX;

            minDistance(root, target, value, minDist);

            return value;
        }

        void minDistance(TreeNode* root, double target, int& value, double& minDist) {
            if (root == NULL) return ;

            int number      = root->val;
            double distance = fabs(target - number);

            if (distance < minDist) {
                value   = number;
                minDist = distance;
            }

            if (number > target) minDistance(root->left, target, value, minDist);
            else minDistance(root->right, target, value, minDist);
        }
