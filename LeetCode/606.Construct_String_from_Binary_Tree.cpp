/*
 * Date: 10/02/2020
 * Author: jiachongliu
 * Times: 1
 */

class Solution {
    public:
        string tree2str(TreeNode* t) {
            if (nullptr == t) return "";
            const string s = std::to_string(t->val);

            if (t->left == nullptr && t->right == nullptr) return s;
            if (t->right == nullptr) return s + "(" + tree2str(t->left) + ")";
            return s + "(" + tree2str(t->left) + ")" + "(" + tree2str(t->right) + ")";
        }
};

