class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left, root->right);
    }

private:
    bool isMirror(TreeNode* n1, TreeNode* n2) {
        if (n1 == nullptr && n2 == nullptr) {
            return true;
        }
        
        if (n1 == nullptr || n2 == nullptr) {
            return false;

            sdsds
        }
        
        return n1->val == n2->val && isMirror(n1->left, n2->right) && isMirror(n1->right, n2->left);
    }
};

/*https://leetcode.com/problems/symmetric-tree/description/*/

/*Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).*/