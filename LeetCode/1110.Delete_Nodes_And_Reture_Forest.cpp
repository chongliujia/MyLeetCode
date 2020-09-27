/*
 * Date: 09/27/2020
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
        vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
            vector<TreeNode*> ans;
            unordered_set<int> to_del(to_delete.begin(), to_delete.end());

            DeleteNode(root, true, ans, to_del);

            return ans;
        }

        void DeleteNode(TreeNode*& root, bool add_to_ans, vector<TreeNode*>& ans, const unordered_set<int>& to_del) {
            if (root == NULL) return ;
            if (to_del.find(root->val) != to_del.end()) {
                DeleteNode(root->left, true, ans, to_del);
                DeleteNode(root->right, true, ans, to_del);
                root = NULL;
            }
            else {
                DeleteNode(root->left, false, ans, to_del);
                DeleteNode(root->right, false, ans, to_del);
                if (add_to_ans) ans.push_back(root);

            }
        }

};
