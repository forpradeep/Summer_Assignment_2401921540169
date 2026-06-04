class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>>new_mat(r,vector<int>(c));
        if(m*n!=r*c ||( r==m && c==n)) return mat;
        int n_index =0;
        int o_index = 0;
        while(n_index<r*c && o_index<m*n){
            new_mat[n_index/c][n_index%c] = mat[o_index/n][o_index%n];
            n_index++;
            o_index++;
        }
        return new_mat;
    }
};