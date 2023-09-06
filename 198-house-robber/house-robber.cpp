class Solution {
public:

    int dp[110];

    int canRob(int i, vector<int>& nums)
    {
        if(i>= nums.size())return 0;
        if(dp[i]!=-1)return dp[i];
        int res = nums[i];
        for(int j = i+2 ;j<nums.size();j++)
        {
            int ans =max(nums[i],nums[i]+canRob(j,nums));
            dp[i]= res=max(ans,res);
        }
        return res;
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int ans =0;
        for(int i = 0 ; i <nums.size();i++)
        {
            ans  =  max(ans,canRob(i,nums));
            // cout<<endl;
        }
        return ans ;
    }
};