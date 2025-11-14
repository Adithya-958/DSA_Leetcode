class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& q) {
        vector<vector<int>>mat(n,vector<int>(n,0));
        for(auto& i: q){
            int r1 = i[0], c1 = i[1], r2 = i[2], c2 = i[3];
            mat[r1][c1] += 1;
            if(r2+1 < n)  
                mat[r2+1][c1] -= 1;
            if(c2+1 < n)
                mat[r1][c2+1] -= 1;
            if(r2+1 < n && c2+1 < n)    mat[r2+1][c2+1] += 1;
        }// boundary matrix is ready
        vector<vector<int>>mat_new(n,vector<int>(n,0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int above = i? mat[i-1][j]:0;
                int left = (j)? mat[i][j-1]:0;                
                int dig = (i && j)?mat[i-1][j-1]:0;
                mat[i][j] += left+above-dig;
            }
        }        
        return mat;
    }
};