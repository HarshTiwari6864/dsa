class Solution {
private:
    bool traver(TreeNode* root, int targetSum, int sum) {
        if (!root) return false;

        sum += root->val;

        if (!root->left && !root->right) {
            return sum == targetSum;
        }

        return traver(root->left, targetSum, sum) ||
               traver(root->right, targetSum, sum);
    }

public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return traver(root, targetSum, 0);
    }
};

/*https://leetcode.com/problems/path-sum/description/*/