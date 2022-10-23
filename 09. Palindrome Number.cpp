class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        
            int s=x;
        long long s1=0;
        while(x)
        {
            s1=s1*10+x%10;
            x/=10;
        }
        if(s1==s) return true;
        else return false;
        
        
        
    }
};
