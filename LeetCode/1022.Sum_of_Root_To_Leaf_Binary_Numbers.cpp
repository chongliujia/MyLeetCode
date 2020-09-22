/*
 * Date: 09/22/2020
 * Author: jiachongliu
 * Times: 1
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        int sumRootToLeaf(TreeNode* root) {
            return def(root, 0);
        }

        int def(TreeNode* root, int sum) {
            if (root == NULL) return 0;
            sum = 2 * sum + root->val;

            if (root->left == NULL && root->right == NULL) return sum;
            
            int leftSum  = root->left == NULL ? 0 : def(root->left, sum);
            int rightSum = root->right == NULL ? 0 : def(root->right, sum);

            return leftSum + rightSum;
        }
}
