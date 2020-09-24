/*
 * Date: 09/24/2020
 * Times: 1
 *
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    public:
        vector<int> findMode(TreeNode* root) {
            TreeNode *cur = root, *pre = nullptr;
            while (cur) {
                if (!cur->left) {
                    update(cur->val);
                    cur = cur->right;
                    continue;
                }

                pre = cur->left;
                while (pre->right && pre->right != cur) pre = pre->right;
                if (!pre->right) {
                    pre->right = cur;
                    cur = cur->left;
                }
                else {
                    pre->right = nullptr;
                    update(cur->val);
                    cur = cur->right;
                }
            }
            return answer;
        }

        void update(int x) {
            if (x == base) ++count;
            else {
                count = 1;
                base = x;
            }

            if (count == maxCount) answer.push_back(base);
            if (count > maxCount) {
                maxCount = count;
                answer = vector<int> {base};
            }
        }


    private:
        int base, count, maxCount;
        vector<int> answer;
