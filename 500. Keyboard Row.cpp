class Solution {
public:
    vector<string> findWords(vector<string>& words) {
    vector<string>ve;
       map<char,int>mp;
        int kt;
    string temp = "qwertyuiopQWERTYUIOP";
    for(auto i : temp) 
    {
        mp[i] = 1;
    }
    temp = "asdfghjklASDFGHJKL";
    for(char &i : temp)
    {
        mp[i] = 2;
    }   
    temp = "zxcvbnmZXCVBNM";
    for(char &i : temp)
    {
        mp[i] = 3; 
    }
     for(int i=0;i<words.size();i++)
     {
         kt=1;
         for(int j=1;j<words[i].size();j++)
         {
             if(mp[words[i][j]]!=mp[words[i][0]])
             {
                 kt=0;
                 break;
             }
         }
         if(kt==1) ve.push_back(words[i]);
     }
        return ve;
    }
};
