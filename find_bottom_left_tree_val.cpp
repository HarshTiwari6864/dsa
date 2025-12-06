class Solution {
private:
    int maxdepth = 0;

    void traverse(TreeNode* root, int depth, int& val) {
        if (!root) return;

        // If this is a new deeper level → update value
        if (depth > maxdepth) {
            maxdepth = depth;
            val = root->val;
        }

        // always go left first → ensures leftmost node is stored first
        traverse(root->left, depth + 1, val);
        traverse(root->right, depth + 1, val);
    }

public:
    int findBottomLeftValue(TreeNode* root) {
        int val = root->val;  // root is always depth 1
        traverse(root, 1, val);
        return val;
    }
};

/*https://leetcode.com/problems/find-bottom-left-tree-value/description/
it is find left child at bottom of right or left node not just left part*/