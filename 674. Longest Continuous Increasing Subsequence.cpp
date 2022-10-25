class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int max=0,sum,check=0;
        int i=0,j=0;
        int ok=1;
        for(int k=0;k<nums.size()-1;k++)
        {
            if(nums[k]!=nums[k+1])
            {
                ok=0;
            }
        }
        if(ok==1) return 1;
        else
        {
            nums.push_back(-1);
             while(i<nums.size()-1)
            {
                
                sum=0;
                if(nums[i]>=nums[i+1])
                {
                    
                    sum=i-j+1;
                    j=i+1;
                    check=1;
        
                }
               // if(i==nums.size()-2&&nums[nums.size()-2]<nums[nums.size()-1]) sum++;
                i++;

                if(sum>max) max=sum;
            }
            if(check==0) return nums.size();
            return max;

        }
       
    }
};
