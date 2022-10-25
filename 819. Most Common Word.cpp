class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for(auto &x:paragraph)
        {
            if(isalpha(x))  x=tolower(x);
            else
            {
                x=' ';
            }
           
        }
       cout<<paragraph;
        string x;
        stringstream ss(paragraph);
        map<string,int> mp;
        while(ss>>x)
        {
            mp[x]++;
        } 
        for(auto l:banned) 
        {
            mp[l]=0;
        }
        int max=0;
        string k="";
        for(auto x:mp)
        {
           
                if(x.second>max)
                {
                    k=x.first;
                    max=x.second;
                    cout<<max<<" ";
                }
            
        }
        return k;

    }
};
