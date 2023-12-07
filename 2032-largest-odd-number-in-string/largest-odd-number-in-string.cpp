class Solution {
public:
    string largestOddNumber(string num) {
        if((num[num.size()-1]-48)&1)return num;
        
        string s="";
        bool found=0;
        for(int i = num.size()-1 ; i >=0 ;i--)
        {
            if((num[i]-48)&1)
            {
                s.push_back(num[i]);
                found=1;
            }
            else if(found)
            {
                s.push_back(num[i]);
            }
        }
        reverse(s.begin(),s.end());
        return s;
    }
};