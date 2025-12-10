class Solution {
    private:
    void traverse(TreeNode* root,vector<int>& res){
        if(!root){
            return;
        }

        traverse(root->left,res);
        res.push_back(root->val);
        traverse(root->right,res);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        traverse(root, res);

        return res;
        
    }
};
/*https://leetcode.com/problems/binary-tree-inorder-traversal/*/