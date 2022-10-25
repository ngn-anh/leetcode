class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int l=-1, k=-1;
        vector<int>ve;
        for(int i=0;i<s.length();i++)
        {
            l=-1;
            k=-1;
            for(int j=i;j<s.length();j++)
            {
                if(s[j]==c)
                {
                    k=j-i;
                    break;
                }
            }
            for(int j=i-1;j>=0;j--)
            {
                if(s[j]==c)
                {
                    l=i-j;
                    break;
                }

            }
            cout<<k<<" "<<l<<endl;
            if(k==-1) ve.push_back(l);
            else if(l==-1) ve.push_back(k);
            else ve.push_back(min(k,l));
        }
        return ve;
    }
};
