class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL)return true;
        if(p==NULL||q==NULL)return false;
        return((p->val==q->val)&&isSameTree(q->left,p->left)&&isSameTree(q->right,p->right));
     }
};

/*Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.*/

/*https://leetcode.com/problems/same-tree/description/*/