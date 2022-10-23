class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0,dem;
        vector<int>ve;
        ve.push_back(0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                ve.push_back(i+1);
            }
        }
        ve.push_back(nums.size()+1);
        for(int i=0;i<ve.size()-1;i++)
        {
            if((ve[i+1]-ve[i]-1)>max) max=(ve[i+1]-ve[i]-1);
        }
        return max;
                
                
    }
};
