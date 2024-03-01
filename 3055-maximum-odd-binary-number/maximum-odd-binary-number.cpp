class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one = 0;
        
        for(char ch: s)
        {
            if(ch=='1')one++;
        }
        if(one==0)return s;
        for(int i = s.size()-1 ; i >=0;i--)
        {
            if(i==s.size()-1){
                s[i]='1';
                one--;
            }
            else{
                s[i]='0';
            }
        }
        for(int i = 0 ; i < s.size()-1 ;i++)
        {
            if(one>0)
            {
                s[i]='1';
                one--;
            }
        }
        return s;
        
    }
};