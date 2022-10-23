class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp1,mp2;
        for(int i=0;i<ransomNote.size();i++)
        {
            mp1[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++)
        {
            mp2[magazine[i]]++;
        }
        for(auto x:mp1)
        {
            if(mp2.count(x.first)==0) return false;
            else
            {
                int k=x.second;
                for(auto l:mp2)
                {
                    if(l.first==x.first)
                    {
                        if(k>l.second) return false;
                    }
                }
                
            }
        }
        return true;
    
    }
};
