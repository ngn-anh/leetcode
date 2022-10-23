class Solution {
public:
    int addDigits(int num) {
        long long s=num;
        while(s>9)
        {
             s=0;
            while(num)
            {
                s+=num%10;
                num/=10;
            }
            num=s;
        }
        return s;
    }
};
