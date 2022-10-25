class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ve;
        
        for(int i=0;i<matrix[0].size();i++)
        {
           vector<int>ve1;
            for(int j=0;j<matrix.size();j++)
            {
                ve1.push_back(matrix[j][i]);
            }
            ve.push_back(ve1);
        }
        return ve;
    }
};
