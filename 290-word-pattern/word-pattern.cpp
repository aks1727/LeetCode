class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp;
        vector<string> word;
        string ns = "";
        for(int i =0 ; i < s.size() ;i++){
            if(s[i]==' '){
                word.push_back(ns);
                ns="";
            }
            else{
                ns.push_back(s[i]);
            }
        }
        word.push_back(ns);
        if(word.size()!=pattern.size())return false;
        
        for(int i= 0 ; i < word.size();i++){
            cout << pattern[i] <<" ";
            if(mp.find(pattern[i])!=mp.end()  && mp[pattern[i]]==word[i]){
                cout<<" 1st "<<word[i]<<endl;
                continue;
            }
            else if(mp.find(pattern[i])==mp.end()){
                mp[pattern[i]]=word[i];
                cout<<" 2nd "<< word[i]<<endl;
            }
            else{
                return false;
            }
        }
        unordered_map<string,char> mp1;
        for(auto &x : mp ){
            if(mp1.find(x.second)!=mp1.end() and mp1[x.second]!=x.first){
                return false;
            }
            mp1[x.second] = x.first;
        }
        return true;

    }
};