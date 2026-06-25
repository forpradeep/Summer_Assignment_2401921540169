class Solution {
public:

    int ans = INT_MIN;

    int gain(TreeNode*root){
        if(root == NULL) return 0;


        int leftg = gain(root->left);
        int rightg = gain(root->right);
        
        leftg = max(0,leftg);
        rightg = max(0,rightg);

        ans = max(ans,leftg + root->val+ rightg);
        return root->val + max(leftg,rightg);
    }
    int maxPathSum(TreeNode* root) {
        if(root == NULL) return 0;

        gain(root);
        return ans;
    }
};