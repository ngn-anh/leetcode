class Solution {
public:
    bool isPalindrome(string s) {
       if(s==" ") return true;
       string s1,s2;
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i])||isalpha(s[i]))
            {
                if(s[i]<='Z'&&s[i]>='A') s[i]+=32;
                s1+=s[i];
                
            }

        }
        for(int i=0;i<s1.length()/2;i++)
        {
            if(s1[i]!=s1[s1.length()-i-1]) return false;
        }
        return true;
        

        
    }
};
