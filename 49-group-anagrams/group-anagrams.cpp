class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(string s : strs){
            string tp = s;
            sort(tp.begin(),tp.end());
            mp[tp].push_back(s);
        }
        vector<vector<string>> res;
        for(auto &x:mp){
            res.push_back(x.second);
        }
        return res;
    }
};