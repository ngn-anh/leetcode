class Solution {
public:
    string convertToBase7(int num) {
        
        int n=abs(num);
        string s;
        if(num==0)
        {
            s='0';
            return s;
        }
        while(n)
        {
            s=char(n%7+'0')+s;
            n/=7;
        }
        if(num<0)s='-'+s;
        return s;
    }
};
