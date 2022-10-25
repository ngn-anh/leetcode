class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>mp;
        for(int i=1;i<=nums.size();i++)
        {
            mp[i]=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<int>ve;
        for(auto x:mp)
        {
            if(x.second==2) ve.push_back(x.first);
            
        }
        for(auto x:mp)
        {
            if(x.second==0) ve.push_back(x.first);
            
        }
        return ve;
    }
};
