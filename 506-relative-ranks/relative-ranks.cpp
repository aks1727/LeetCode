class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> res (score.size());
        unordered_map<int,int> mp;
        for(int i =  0 ; i < score.size() ;i++)
        {
            mp[score[i]]=i;
        }
        sort(score.rbegin(),score.rend());
        for(int i = 0 ; i < score.size() ;i++)
        {
            res[mp[score[i]]]=to_string(i+1);
            if(i==0)res[mp[score[i]]]="Gold Medal";
            if(i==1)res[mp[score[i]]]="Silver Medal";
            if(i==2)res[mp[score[i]]]="Bronze Medal";
        }
        return res;
    }
};