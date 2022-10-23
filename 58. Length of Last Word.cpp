class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string x;
        int k;
        while(ss>>x)
        {
            k=x.length(); 
        }
        return k;
        
    }
};
