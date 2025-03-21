class Solution {
public:
    unordered_map<char,char> mp = {
        {'(',1},
        {'{',2},
        {'[',3},
        {')',-1},
        {'}',-2},
        {']',-3}
    };
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0 ; i < s.size();i++){
            // cout<<"s[i] : "<<s[i]<<" ";
            if(st.empty()){
                st.push(s[i]);
            }
            else if(s[i]=='}' or s[i]==']' or s[i]==')'){
                if(mp[st.top()] + mp[s[i]]==0){
                    // cout<<endl<<st.top()<<endl;
                    st.pop();
                }
                else st.push(s[i]);
            }
            else st.push(s[i]);
            // stack<char> tp = st;
            // while(!tp.empty()){
            //     cout<<tp.top() <<" ";
            //     tp.pop();
            // }
            // cout<<endl;
        }
        return st.empty();
        
    }
};