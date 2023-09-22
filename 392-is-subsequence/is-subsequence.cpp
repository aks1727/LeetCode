class Solution {
public:
    bool isSubsequence(string s, string t) {
        int mark=0;
        int cnt=0;
        for(int i = 0 ; i < s.size();i++)
        {
            for(int j = mark;j<t.size();j++)
            {
                if(s[i]==t[j])
                {
                    cout<<s[i]<<" "<<i<<" "<<j<<endl;
                    mark=j+1;
                    cnt++;
                    break;
                }
            }
        }
        return (bool)(cnt==s.size());
    }
};