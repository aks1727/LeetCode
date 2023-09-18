class Solution {
public:
    bool checkRecord(string s) {
        int m =0;
        int cnt=0;
        int acnt=cnt;
        for(int i=0;i<s.size();i++){

            if(s[i]!='L')
            {
                if(m<cnt)m=cnt;
                cnt=0;
                if(s[i]=='A')acnt++;
            }
            else if(s[i]=='L')cnt++;
            else if(s[i]=='A')acnt++;
        }
        if(cnt>m)m=cnt;
        if(acnt<2 and m<3)return true;
        return false;
    }
};