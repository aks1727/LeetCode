class Solution {
public:

    void helper(int i,vector<int>& nums,vector<vector<int>>&res, vector<int> &tmp )
    {
        if(i>nums.size()-1)
        {
            res.push_back(tmp);return;
        }
        tmp.push_back(nums[i]);
        helper(i+1,nums,res,tmp);
        tmp.pop_back();
        helper(i+1,nums,res,tmp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tmp;
        helper(0,nums,res,tmp);
        return res;
    }
};