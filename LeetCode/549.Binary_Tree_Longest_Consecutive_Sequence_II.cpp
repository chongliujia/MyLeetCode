/*
 * Date: 09/13/2020
 * Author: jiachongliu
 * Times: 1
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {};
};


class Solution {
    public:
        int longestConsecutive(TreeNode* root) {
            longestPath(root);
            return maxval;
        }

        vector<int> longestPath(TreeNode* root) {
            if (root == NULL) return vector<int> {0, 0};

            int inr = 1, dcr = 1;
            if (root->left != NULL) {
                vector<int> l = longestPath(root->left);
                if (root->val == root->left->val + 1) dcr = l[1] + 1;
                else if (root->val == root->left->val - 1) inr = l[0] + 1;
            }

            if (root->right != NULL) {
                vector<int> r = longestPath(root->rigth);
                if (root->val == root->right->val + 1) dcr = max(dcr, r[1] + 1);
                else if (root->val == root->right->val - 1) inr = max(inr, r[0] + 1);
            }

            maxval = max(maxval, dcr + inr - 1);
            return vector<int> {inr, dcr};

        }
    private:
        int maxval = 0;
};
