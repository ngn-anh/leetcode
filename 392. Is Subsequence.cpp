class Solution {
public:
    bool isSubsequence(string s, string t) {
        int min=0;
        int dem=0;
        int n=s.length();
        for(int i=0;i<t.length();i++)
        {
            if(t[i]==s[0])
            {
                s.erase(0,1);
                if(i>=min)
                {
                    min=i;
                    dem++;
                }
                else return false;
                
            }
        
        }
        if(dem!=n) return false;
        return true;
    }
};
