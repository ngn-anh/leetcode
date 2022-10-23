class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        int sum=0;
        int kt=0;
        for(auto x:mp)
        {
            if(x.second%2==0)
            {
                sum+=x.second;
            }
            else
            {
                
                sum+=x.second-1;
                kt=1;
            }
        }
        if(kt==1) return sum+1;
        return sum;
    }
};
