class Solution {
public: 
    bool isValid(TreeNode* root, long long minVal, long long maxVal){
        if(root == NULL) return true;
        if(root->val<= minVal || root->val>= maxVal) return false;
        bool left = isValid(root->left, minVal,root->val);
        bool right = isValid(root->right, root->val,maxVal);
        return left && right;
    }

    bool isValidBST(TreeNode* root) {
        long long minVal = LLONG_MIN;
        long long maxVal = LLONG_MAX;
        return isValid(root, minVal,maxVal);
    }
};