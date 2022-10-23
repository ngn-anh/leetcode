class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>se;
        for(int i=0;i<nums.size();i++)
        {
            se.insert(nums[i]);
        }
        if(se.size()==nums.size()) return false;
        else return true;
    }
};
