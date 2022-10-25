class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>ve1;
        for(auto ve:image)
        {
            for(int i=0;i<ve.size()/2;i++)
            {
                swap(ve[i],ve[ve.size()-i-1]);
            }
            for(int i=0;i<ve.size();i++)
            {
                if(ve[i]==0) ve[i]=1;
                else ve[i]=0;
            }
            ve1.push_back(ve);
        }
        return ve1;
    

     
    }
};
