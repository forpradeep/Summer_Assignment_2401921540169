class Solution {
    public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root == NULL) return ans;
        q.push(root);
        bool leftToright = true;
        while(!q.empty()){
            int size = q.size();
            vector<int>level;
            for(int i = 0;i<size;i++){
                TreeNode*front = q.front();
                q.pop();
                level.push_back(front->val);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            if(!leftToright){
                reverse(level.begin(),level.end());
        }
        ans.push_back(level);
        leftToright = !leftToright;
        }   
        return ans;
    }
};