class Solution {
public:
    string addBinary(string a, string b) {
       string s1="";
        if(a.length()<b.length()) 
        {
            while(a.length()<b.length())
            {
                a="0"+a;
            }
        }
        if(a.length()>b.length()) 
        {
            while(a.length()>b.length())
            {
                b="0"+b;
            }
        }
        int l=a.length();
        int s=0;
        int nho=0;
        for(int i=l-1;i>=0;i-- )
        {
            s=(a[i]-'0')+(b[i]-'0')+nho;
            if(s<2) 
            {
                s1=to_string(s)+s1;
                nho=0;
            }
            else 
            {
                s1=to_string(s-2)+s1;
                nho=1;
                
            }
        }
        if(nho==1) s1=to_string(1)+s1;
        return s1;
        
    }
};
