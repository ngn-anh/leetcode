class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       set<int>se1;
        set<int>se2;
        vector<int>ve;
        for(int i=0;i<nums1.size();i++)
        {
            se1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            se2.insert(nums2[i]);
        }
        for(auto x:se1)
        {
            if(se2.count(x)>0)
            {
                ve.push_back(x);
            }
        }
        return ve;
    }
};
