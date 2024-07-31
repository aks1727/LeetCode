class Solution {
public:
    int minimumDeletions(string s) {
        int cnt = 0;
        stack<char> st;
        st.push(s[0]);
        for(int i = 1 ; i < s.size() ;i++){
            if(!st.empty() && (st.top()=='b' and s[i]=='a')){
                st.pop();
                cnt++;
            }
            else{
                st.push(s[i]);
            }
        }
        return cnt;
    }
};