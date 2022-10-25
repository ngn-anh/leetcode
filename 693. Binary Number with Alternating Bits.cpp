class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s;
        while(n)
        {
            s+=to_string(n%2);
            n/=2;
        }
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                return false;
            }
            
        }
        return true;
    }
};
