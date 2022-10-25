class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector <int>ve;
        int k=0;
        for(auto x:nums) ve.push_back(x);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
           
            if(ve[i]==nums[nums.size()-1]) k=i;
            else
            {
                 if(ve[i]*2>nums[nums.size()-1]) return -1;
            }
        }
        return k;
    }
};
