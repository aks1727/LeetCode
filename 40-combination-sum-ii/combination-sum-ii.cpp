class Solution {
public:

    void findComb(int i, int target,vector<vector<int>>& ans , vector<int>& res,vector<int>&candi)
    {
        
        if(target==0)
        {
            ans.push_back(res);
            return;
        }
        for(int j = i ; j < candi.size() ;j++)
        {
            if(j>i and candi[j] == candi[j-1])continue;
            if(candi[j]>target)break;
            res.push_back(candi[j]);
            findComb(j+1,target-candi[j],ans,res,candi);
            res.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        vector<int> res;
        findComb(0,target,ans,res,candidates);
        return ans;
    }
};