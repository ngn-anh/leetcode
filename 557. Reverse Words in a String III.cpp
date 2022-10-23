class Solution {
public:
    string reverseWords(string s) {
        string x;
        string s1="";
        stringstream ss(s);
        while(ss>>x)
        {
            reverse(x.begin(),x.end());
            s1+=x;
            s1+=" ";
        }
        s1.erase(s1.length()-1,1);
        return s1;
    }
};
