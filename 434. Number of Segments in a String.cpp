class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string x;
        int dem=0;
        while(ss>>x)
        {
            dem++;
        }
        return dem;
        
    }
};
