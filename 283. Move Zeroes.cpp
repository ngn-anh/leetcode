class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int dem=0,dem1=0;;
      int k=nums.size()-1;
        int i=0;
        for(int l=0;l<=k;l++) 
        {
            if(nums[l]==0) dem++;
        }
        while(i<nums.size())
        {
            if(nums[i]==0) 
            {
               for(int j=i;j<nums.size()-1;j++)
               {
                   nums[j]=nums[j+1];
               }
                nums[k]=0;
                k--;
                dem1++;
                if(dem1==dem) break;
            }
            else i++;
        }
      //cout<<dem<<" "<<dem1;
        
    }
};

