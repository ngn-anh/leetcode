class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int>mp1,mp2,mp;
     
        for(int i=0;i<list1.size();i++)
        {
            mp1[list1[i]]=i;
        }
        for(int i=0;i<list2.size();i++)
        {
            mp2[list2[i]]=i;
        }
        for(auto x:mp1)
        {
            for(auto k:mp2)
            {
                if(x.first==k.first)
                {
                    mp[x.first]=x.second+k.second;
                }
            }
        }
        int min=INT_MAX;
        for(auto x:mp)
        {
            if(x.second<min)
            {
                min=x.second;
            }
        }
        vector<string>ve;
        for(auto x:mp)
        {
            if(x.second==min) ve.push_back(x.first);
        }
        return ve;





        
    }
};
