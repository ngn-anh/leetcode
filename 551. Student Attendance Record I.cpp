class Solution {
public:
    bool checkRecord(string s) {
       int dem=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A') dem++;
        }
        if(dem>=2) return false;
        if(s.length()<3) return true;
        for(int i=0;i<s.length()-2;i++)
        {
            if(s[i]=='L')
            {
                if(s[i+1]=='L'&&s[i+2]=='L') return false;
            }
        }
        return true;
    }
};
