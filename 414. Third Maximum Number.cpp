class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>se;
        vector<int>ve;
        for(int i=0;i<nums.size();i++)
        {
            se.insert(nums[i]);
        }
        for(int x:se) ve.push_back(x);
        if(ve.size()<3) return ve[ve.size()-1];
        else return ve[ve.size()-3];
    }
};
