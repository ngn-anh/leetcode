class Solution {
public:
    int countPrimeSetBits(int left, int right) {
       int dem=0;
     
        for(int i=left;i<=right;i++)
        {
            
            if(ktra(ktra1(i))) dem++;

        }
        return dem;
        
    }
private:
    bool ktra(int n)
    {
        if(n<2) return false;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }   
    int ktra1(int n)
    {
            int dem1=0;
            while(n)
            {
                if(n%2==1) dem1++;
                n/=2;
            }
        return dem1;
    } 
};
