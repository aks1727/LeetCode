class Solution {
public:
    int longestValidParentheses(string s) {
        int left = 0;
        int right = 0;
        int mxlen =0;
        for(int i = 0 ; i < s.size();i++){
            if(s[i]=='('){
                left++;
            }
            else {
                right++;
            }
            if(left<right){
                left = 0;
                right = 0;
            }
            else if(left==right){
                mxlen = max(mxlen,left*2);
            }
        }
        if(left==right)mxlen = max(mxlen,left*2);
        left = right =0;
        for(int i = s.size()-1 ; i >=0;i--){
            if(s[i]=='('){
                left++;
            }
            else {
                right++;
            }
            if(left>right){
                left = 0;
                right = 0;
            }
            else if(left==right){
                mxlen = max(mxlen,left*2);
            }
        }
        if(left==right)mxlen = max(mxlen,left*2);
        return mxlen;
    }
};
