/*
 * Date: 09/20/2020
 * Author: jiachongliu
 * Times: 1
 */

class Solution {
    public:
        TreeNode* subtreeWithAllDeepest(TreeNode* root) {
            int maxDepth = 0;
            return getMaxDepthAndResult(root, maxDepth);
        }

        TreeNode* getMaxDepthAndResult(TreeNode* curNode, int& maxDepth) {
            if (curNode == NULL) {
                maxDepth = 0;
                return NULL;
            }

            int leftMaxDepth = 0;
            int rightMaxDepth = 0;

            TreeNode* leftResult = getMaxDepthAndResult(curNode->left, leftMaxDepth);
            TreeNode* rightResult = getMaxDepthAndResult(curNode->right, rightMaxDepth);

            if (leftMaxDepth == rightMaxDepth) {
                maxDepth = leftMaxDepth + 1;
                return curNode;
            }
            else if (leftMaxDepth > rightMaxDepth) {
                maxDepth = leftMaxDepth + 1;
                return leftMaxDepth;
            }
            else if (leftMaxDepth < rightMaxDepth) {
                maxDepth = rightMaxDepth + 1;
                return rightMaxDepth;
            }

            return NULL;
        }
};
