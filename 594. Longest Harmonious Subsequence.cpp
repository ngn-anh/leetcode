class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector <int>ve;
        for(auto x:mp)
        {
            ve.push_back(x.first);
        }
        int max=0;
        int s;
        for(int i=0;i<ve.size()-1;i++)
        {
            if(ve[i]+1==ve[i+1])
            {
                s=mp[ve[i]]+mp[ve[i+1]];
                if(s>max) max=s;
            }
        }
        return max;
    }
};
