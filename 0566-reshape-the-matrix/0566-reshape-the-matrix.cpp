class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();
        int total = n*m;
        if(total!=r*c){
            return mat;
        } 
        vector<vector<int>> newReshaped(r,vector<int>(c));
        for(int i = 0; i < total; i++){      
                newReshaped[i/c][i%c] = mat[i/m][i%m];  
        }  
        return newReshaped;
    }
};