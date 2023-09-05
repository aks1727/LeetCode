class Solution {
public:

    void findComb(int i , int target, vector<vector<int>>&ans , vector<int> &res, vector<int>&q, int k)
    {
        if(i>=q.size())
        {
            if(res.size()==k)
            {
                if(target==0)
                {
                    ans.push_back(res);
                }
            }
            return;
        }
        if(res.size()==k)
        {
            if(target==0)
            {
                ans.push_back(res);
            }
            return;
        }
        if(target>=q[i])
        {
            res.push_back(q[i]);
            findComb(i+1,target-q[i],ans,res,q,k);
            res.pop_back();
        }
        findComb(i+1,target,ans,res,q,k);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> res;
        vector<int> q = {1,2,3,4,5,6,7,8,9};
        findComb(0,n,ans , res, q, k);
        return ans;
    }
};