/*
 * Date: 09/13/2020
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
        vector<int> inorderTraversal(TreeNode* root) {
            vector<int> result;
            inorder(root, result);
            return result;
        }

        void inorder(TreeNode* root, vector<int>& list) {
            if (root == NULL) return ;
            inorder(root->left, list);
            list.push_back(root->val);
            inorder(roo->right, list);
        }
};
