class Solution {
public:
    string toGoatLatin(string sentence) {
        string s;
        stringstream ss(sentence);
        string x;
        int i=1;
        while(ss>>x)
        {
            if(x[0]=='a'||x[0]=='A'||x[0]=='e'||x[0]=='E'||x[0]=='i'||x[0]=='I'||x[0]=='o'||x[0]=='O'||x[0]=='u'||x[0]=='U')
            {
                x+="ma";
            }
            else
            {
                x=x+x[0]+"ma";
                x.erase(0,1);
            }
           for(int k=1;k<=i;k++)
           {
               x+="a";
           }
            i++;
            s=s+x+" ";
        }
        s.erase(s.length()-1,1);
        return s;
    }
};
