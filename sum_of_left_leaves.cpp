class Solution {
    private:
    void travleft(TreeNode* root,bool isleft,int& sum){
        if(!root){
            return;
        }
        if(isleft &&!root->left && !root->right){
            sum+=root->val;
        }
        travleft(root->left,false,sum);
        travleft(root->right,false,sum);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum;
        travleft(root,false,sum);
        return sum;
    }
};

/*https://leetcode.com/problems/sum-of-left-leaves/description/*/