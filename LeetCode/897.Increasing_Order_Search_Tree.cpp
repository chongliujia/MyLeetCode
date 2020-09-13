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
        TreeNode* increasingBST(TreeNode* root) {
            vector<int> res;
            inorder(root, res);

            TreeNode* ans = new TreeNode(0);
            TreeNode* cur = ans;

            for (int v : res) {
                cur->right = new TreeNode(v);
                cur = cur->right;
            }

            return ans->right;

        }

        void inorder(TreeNode* root, vector<int>& list) {
            if (root == NULL) return ;
            inorder(root->left, list);
            list.push_back(root->val);
            inorder(roor->right, list);
        }
};
