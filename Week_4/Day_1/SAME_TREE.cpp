class Solution {
public:
    // bool left(TreeNode* p, TreeNode* q){
    //     if(p == NULL && q == NULL ) return true;
    //     if(p== NULL || q == NULL) return false;
    //     return p->left->val== q->left->val;
    // }

    // bool right(TreeNode* p, TreeNode* q){
    //     if(p == NULL && q == NULL ) return true;
    //     if(p== NULL || q == NULL) return false;
    //     return p->right->val == q->right->val;
    // }

    // wrong logic attempt
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL ) return true;
        if(p== NULL || q == NULL) return false;
        if(p->val != q->val) return false;
        return isSameTree(p->left , q->left) && isSameTree(p->right, q->right) ;
    }
};