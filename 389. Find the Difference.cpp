class Solution {
public:
    char findTheDifference(string s, string t) {
       int i=0,kt;
        while(i<t.length())
        {
            i=0;
            kt=0;
            for(int j=0;j<s.length();j++)
            {
                if(t[i]==s[j])
                {
                    t.erase(i,1);
                    s.erase(j,1);
                    kt=1;
                    break;
                }
            }
            if(kt==0||t.length()==1) return t[0];
            
        }
        return t[0];
    }
};
