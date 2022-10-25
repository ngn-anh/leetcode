class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,sum1=0,k=0,l=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        if(sum-nums[0]==0) return 0;
        
        else
        {
            if(sum-nums[nums.size()-1]==0) l= nums.size()-1;
            for(int i=nums.size()-2;i>=1;i--)
            {
                sum1+=nums[i+1];
                
                if(sum1*2==(sum-nums[i])) k=i;
            }
            cout<<l<<" "<<k;
            
            if(k>0)
            {
                if(l==0||l>=k) return k;
                else return -1;
            }
            else
            {
                if(l!=0) return l;
                else return -1;
            }
           
        }
        
        
    }
};
