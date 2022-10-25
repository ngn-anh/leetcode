class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>se;
        for(int i=0;i<candyType.size();i++)
        {
            se.insert(candyType[i]);
        }
        int n=se.size();
        int m=candyType.size()/2;
        if(n<=m) return n;
        else return m;
    }
};
