class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0 ;
        int count = 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!(q.empty())){
            int size = q.size();
            vector<int>level;
            for(int i = 0;i<size;i++){
                TreeNode* front = q.front();
                q.pop();
                level.push_back(front->val);
                if(front->left != NULL) q.push(front->left);
               if(front->right!= NULL) q.push(front->right); 
               
            }
            count++;
            
        }
        return count;
    }
};