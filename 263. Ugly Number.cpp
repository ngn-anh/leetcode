class Solution {
public:
    bool isUgly(int n) {
        if(n==1) return true;
        else
        {
            for(int i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    if(i!=2&&i!=3&&i!=5) return false;
                    while(n%i==0)
                    {
                        n/=i;
                    }
                }
            }
        }
        if(n!=1)
        {
            if(n!=2&&n!=3&&n!=5) return false;
            else return true;
        }
        return true;
    }
};
