class Solution {
    bool isValid(int code, int len){
        if(len==1) return code>=1 && code<=26;
        return code>=10&&code<=26;
    }

    int countOfDecoding(int i, string& s,vector<int>& dp){
        if(i>=s.length()) return 1;
        if(dp[i]!=-1) return dp[i];
        dp[i]=0;
        if(isValid(s[i]-'0',1)){
            dp[i]+=countOfDecoding(i+1,s,dp);
        }
        if(i<s.length()-1 && isValid((s[i]-'0')*10 +s[i+1]-'0',2)){
            dp[i]+=countOfDecoding(i+2,s,dp);
        }

        return dp[i];
    }
public:
    int numDecodings(string s) {
        vector<int> dp(s.length(),-1);
        return countOfDecoding(0,s,dp);
    }
};