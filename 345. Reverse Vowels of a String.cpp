class Solution {
public:
    string reverseVowels(string s) {
        
        string s1="";
        int ok=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                s1=s[i]+s1;
                s[i]='~';
                ok=1;
            }
        }
        if(ok==0) return s;
        int k=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='~')
            {
                s[i]=s1[k++];
            }
        }
        return s;
    }
};
