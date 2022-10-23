class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ve;
        int res,kt,l,s;
        for(int i=0;i<nums1.size();i++)
            {
                res=-1;
                kt=0;
                for(int j=0;j<nums2.size();j++)
                {
                    if(nums1[i]==nums2[j])
                    {
                        s=nums1[i];
                        l=j;
                    }
                }
                    for(int k=l+1;k<nums2.size();k++)
                    {
                        if(nums2[k]>s)
                        {
                            res=nums2[k];
                            kt=1;
                            ve.push_back(res);
                            break;
                        }
                    }
                    if(kt==0) ve.push_back(-1);
         }
            
        
        return ve;
    }
};
