/*
 * Date: 09/15/2020
 * Author: jiachongliu
 * Times: 1
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr)  {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution {
    public:
        int countPairs(TreeNode* root, int distance) {
        }


    private:
        int ans = 0;
        vector<int> dfs(TreeNode* root, int d) {
            if (root == NULL) return {};
            if ((root->left == NULL) && (root->right == NULL)) return {1};

            auto left  = dfs(root->left, d);
            auto right = dfs(root->right, d);

            for (auto& a : left) {
                for (auto& b : right) {
                    if (a + b <= d) ans++;
                }
            }

            vector<int> ret;
            for (auto& a : left) {
                if (a + 1 <= d) ret.push_back(a + 1);
            }

            for (auto& a : right) {
                if (a + 1 <= d) ret.push_back(a + 1);
            }

            return ret;
        }
};

