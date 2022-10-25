class Solution {
public:
    bool judgeCircle(string moves) {
        int dem=0,dem1=0,dem2=0,dem3=0;
        for(char x:moves)
        {
            if(x=='R') dem++;
            else if(x=='L') dem1++;
            else if(x=='U') dem2++;
            else dem3++;
        }
        if(dem==dem1&&dem2==dem3) return true;
        return false;

    }
};
