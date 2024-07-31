class Solution {
public:

    void gp(int open,int close, vector<string>&res, string s){
        if(open<=0 and close<=0 ){
            res.push_back(s);
            return;
        }
        if(open){
            s.push_back('(');
            gp(open-1,close,res,s);
            s.pop_back();
        }
        if(close>open){
            s.push_back(')');
            gp(open,close-1,res,s);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        gp(n,n,res,"");
        return res;    
    }
};