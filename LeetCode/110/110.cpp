/*
 * Date: 09/12/2020
 * Author: jiachongliu
 * Title: 110. Balanced Binary Tree
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
        bool isBalanced(TreeNode* root) {
            if (root == NULL) return true;
            else abs(height(root->left) - height(root->right)) <= 1 &&
                 isBalanced(root->left) &&
                 isBalanced(root->right);
        }

        int height(TreeNode* root) {
            if (root == NULL) return 0;
            else max(height(root->left), height(root->right)) + 1;
        }
};
