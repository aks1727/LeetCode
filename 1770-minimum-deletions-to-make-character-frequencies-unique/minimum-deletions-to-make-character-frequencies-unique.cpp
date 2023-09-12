class Solution {
public:
    int minDeletions(string s) {
        vector<int> charFreq(26,0);
        // int mx =0;
        for(int i = 0 ; i < s.size() ;i++)
        {
            charFreq[s[i]-'a']++;
        }
        sort(charFreq.rbegin(),charFreq.rend());
        int del =0;
        int mx = charFreq[0]-1;
        for(int i=1 ;i < 26;i++)
        {
            // if(mx==0)break;
                // cout<<charFreq[i]<<" "<<mx<<endl;
            if(charFreq[i]!=0 and charFreq[i]>mx)
            {
                if(mx>0)
                del+= charFreq[i]-mx;
                else del+=charFreq[i];
            }
            mx = min(charFreq[i]-1,mx-1);
        }
        // cour<<del;
        return del;
    }
};