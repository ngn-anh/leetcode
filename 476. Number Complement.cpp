class Solution {
public:
    int findComplement(int num) {
        long long sum=0;
        string s;
        while(num)
        {
            if(num%2==0)
            {
                s='0'+s;
            }
            else s='1'+s;
            num/=2;
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<s.length();i++)
        {
        
            if(s[i]=='0')
            {
                sum+=pow(2,i);
            }
        }
        cout<<s;
        return sum;
    }
};
