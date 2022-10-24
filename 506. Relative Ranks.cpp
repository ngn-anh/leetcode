class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        set<int>se;
        vector<string>ve;
        for(int i=0;i<score.size();i++)
        {
            se.insert(score[i]);
        }
        map<int,int>mp;
        int t=score.size();
        for(auto x:se)
        {
            mp[x]=t;
            t--;
        }
        for(int i=0;i<score.size();i++)
        {
            if(mp[score[i]]==1)  ve.push_back("Gold Medal");
            else if(mp[score[i]]==2)  ve.push_back("Silver Medal");
            else if(mp[score[i]]==3)  ve.push_back("Bronze Medal");
            else
            {
                ve.push_back(to_string(mp[score[i]]));

            }
        }
        return ve;
        
    }
};
