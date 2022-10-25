class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char a=letters[0];
        sort(begin(letters),end(letters));
        for(auto x:letters)
        {
            if(x>target) return x;
        }
        return a;
        
    }
};
