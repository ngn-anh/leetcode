class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        int max=0;
        int t;
        set<int>se;
        for(auto x:mp)
        {
            if(x.second>max) 
            {
                max=x.second;
            }
        }
         for(auto x:mp)
        {
            if(x.second==max) 
            {
                se.insert(x.first);
            }
        }
        int min=INT_MAX;
    for(auto k:se)
    {
        int a,b;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==k)
            {
                a=i;
                break;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==k)
            {
                b=i;     
            }
        }
        if(b-a+1<min) min=b-a+1;

    }
        
    return min;
    }
};
