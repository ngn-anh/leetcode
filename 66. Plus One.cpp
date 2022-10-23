class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s=1;
         vector<int> plusOne;
        for(int i=digits.size()-1;i>=0;i--)
        {
            s+=digits[i];
            if(s<10)
            {
               plusOne.push_back(s);
                s=0;
            }
            else
            {
                plusOne.push_back(0);
                s=1;
            }
            
        }
        if(s==1) plusOne.push_back(1);
        reverse(plusOne.begin(),plusOne.end());
        return plusOne;
        
    }
};
