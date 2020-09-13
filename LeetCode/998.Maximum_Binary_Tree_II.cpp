/*
 * Date: 09/13/2020
 * Author:jiachongliu
 * Times: 1
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
            if (root == NULL) return new TreeNode(val);
            else {
                if (root->val < val) {
                    TreeNode* node = new TreeNode(val);
                    node->left = root;
                    return node;
                }
                else {
                    root->right = insertIntoMaxTree(root->right, val);
                    return root;
                }
            }
        }
};
            
