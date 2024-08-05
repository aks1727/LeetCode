class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        for(string x : arr){
            mp[x]++;
        }
        vector<string> res;
        for(string x : arr ){
            if(mp[x]==1){
                res.push_back(x);
            }
        }
        if(k-1>= res.size())return "";
        return res[k-1];
        
    }
};