class Solution {
public:
    string customSortString(string order, string s) {
        
        string res ="";
        int  ar[26];
        for(char ch: s)
        {
            ar[ch-'a'] = 1;
        }
        for(char ch: order)
        {
            int cnt = 0;
            for(char c : s)
            {
                if(c==ch){
                    ar[c-'a']=-1;
                    res.push_back(c);
                }
            }
        }
        for(char ch : s)
        {
            if(ar[ch-'a']==1)
            {
                res.push_back(ch);
            }
        }
        return res;
    }
};