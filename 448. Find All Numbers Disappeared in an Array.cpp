class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>se;
        vector<int>ve;
        int max=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            se.insert(nums[i]);
           
        }
        for(int i=1;i<=max;i++)
        {
            if(se.count(i)<1) ve.push_back(i);
        }
        return ve;
    }
};
