class Solution {
public:
    int sumNumbers(TreeNode* root) {
        return preorder(root,0);
    }
    int preorder(TreeNode* root,int curr){
        if(root==NULL){
            return 0;
        }
        curr=curr*10 + root->val;
        if(!root->left&&!root->right){
            return curr;
        }
        return preorder(root->left,curr)+preorder(root->right,curr);
    }
};
/*https://leetcode.com/problems/sum-root-to-leaf-numbers/*/