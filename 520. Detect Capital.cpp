class Solution {
public:
    bool detectCapitalUse(string word) {
            if(word[0]<='Z'&&word[0]>='A')
            {
                if(word[1]<='Z'&&word[1]>='A')
                {
                    for(int i=2;i<word.length();i++)
                    {
                        if(word[i]<'A'||word[i]>'Z')
                        {
                            return false;
                        }
                       
                    }
                     return true;
                }
                else
                {
                    for(int i=2;i<word.length();i++)
                    {
                      
                        if(word[i]<='Z'&&word[i]>='A')
                        {
                            cout<<1;
                            return false;
                        }
                       
                    }
                     return true;
                }
            }
            else
            {
                for(int i=1;i<word.length();i++)
                {
                    if(word[i]<'a'||word[i]>'z')
                        {
                            return false;
                        }
                       
                }
                 return true;
            }
        return true;
    }
};
