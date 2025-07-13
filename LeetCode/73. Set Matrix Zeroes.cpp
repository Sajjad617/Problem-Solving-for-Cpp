class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // boolean[] r = new boolean[matrix.Length];
        // boolean[] l = new boolean[matrix[0].length];
        vector<bool> r(matrix.size(), false);
        vector<bool> c(matrix[0].size(), false);
        
        for (int i = 0 ; i < matrix.size() ;i++){
            for(int j = 0 ; j < matrix[0].size() ; j++){
                if(matrix[i][j] == 0){
                    r[i] = true;
                    c[j] = true;
                }
            }
        }
        for (int i = 0 ; i < matrix.size() ;i++){
            for(int j = 0 ; j < matrix[0].size() ; j++){
                if(r[i] || c[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};