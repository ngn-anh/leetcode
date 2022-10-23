class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        set<int>se;
         int min=nums[0];
        int max=nums[n-1];
        for(int i=0;i<n;i++)
        {
            se.insert(nums[i]);
            if(nums[i]>max) max=nums[i];
            if(nums[i]<min) min=nums[i];
        }
       for(int i=min;i<=max;i++)
       {
           if(se.count(i)==0)
           return i;
       }
     if(min==0)   return max+1;
        else return 0;
        
        
    }
};
