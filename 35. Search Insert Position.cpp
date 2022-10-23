class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
        }
        int k=0;
        int kt=0;
        while(k<nums.size())
        {
            if(nums[k]>target)
            {
                return k;
            }
            k++;
           
        }
       
        return nums.size();
        
    }
};
