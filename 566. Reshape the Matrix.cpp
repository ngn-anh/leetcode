class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
         int M = mat.size(), N = mat[0].size();
        if (M * N != r * c) return mat;
        vector<int>ve;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                ve.push_back(mat[i][j]);
            }
        }
        int k=0;
        
        vector<vector<int>> ve1;
        for(int i=0;i<r;i++)
        {
            vector<int>ve2;
            for(int j=0;j<c;j++)
            {
                
                ve2.push_back(ve[k++]);

            }
            ve1.push_back(ve2);

        }
        return ve1;
        
    }
};
