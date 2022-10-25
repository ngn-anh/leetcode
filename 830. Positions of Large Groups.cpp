class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector <int>ve;
        int k=0;
        for(auto x:nums) ve.push_back(x);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
           
            if(ve[i]==nums[numsclass Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int start = 0, end = 0;
        vector<vector<int>> ans;
        
        for(int end = 0; end < s.size(); end++){
            //check for a group when the string ends
            if(end == s.size()-1 ||s[end] != s[end+1]){
                //deal with old group
                if(end-start+1 >= 3){
                    ans.push_back(vector<int> {start, end});
                }
                //update for new group
                start = end+1;
            }
        }
        
        return ans;
    }
};.size()-1]) k=i;
            else
            {
                 if(ve[i]*2>nums[nums.size()-1]) return -1;
            }
        }
        return k;
    }
};
