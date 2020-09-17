/*
 * Date: 09/17/2020
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
        int countNodes(TreeNode* root) {
            if (root == NULL) return 0;
            return countNodes(root->left) + countNodes(root->right) + 1;
        }
};
