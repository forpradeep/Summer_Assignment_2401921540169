/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<int,int> mp; 
    
    TreeNode* solve(vector<int>& preorder, int prestart, int preend, 
                    vector<int>& inorder, int instart, int inend){
        
       
        if(prestart > preend) return NULL;
        
        TreeNode* root = new TreeNode(preorder[prestart]);
        
        int inRoot = mp[preorder[prestart]];
        
        int leftSize = inRoot - instart;
        
        root->left = solve(preorder, prestart+1, prestart+leftSize,
                           inorder, instart, inRoot-1);
        
        root->right = solve(preorder, prestart+leftSize+1, preend,
                            inorder, inRoot+1, inend);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;
        
        return solve(preorder, 0, preorder.size()-1,
                     inorder, 0, inorder.size()-1);
    }
};