class Solution {
public:
    bool isHappy(int n) {
      
        long long s=n;
        while(s!=1&&s!=4)
        {
            s=0;
            while(n)
            {
                int k=n%10;
                s+=k*k;
                n/=10;
            }
            n=s;
            
        }
        if(s==1) return true;
        else return false;
    }
};
