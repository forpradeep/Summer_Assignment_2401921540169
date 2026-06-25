class Solution {
public: 
    int d = 0;
    int height(TreeNode*root){
        if(root == NULL) return 0;
        int lefth = height(root->left);
        int righth = height(root->right);
        d =max(d, lefth + righth); // update diameter 
        return 1 + max(lefth, righth); // return height
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;
        height(root);
        return d;
    }
};
