class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int s1= nums.back()*max(nums[nums.size()-2]*nums[nums.size()-3],nums[0]*nums[1]);
        int s2= nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        cout<<s1<<" "<<s2;
        return max(s1,s2);
    }
};
