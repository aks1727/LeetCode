class Solution {
public:

    int dp[1000+10];
    int findCost(int ind, vector<int>& cost)
    {
        if(ind>=cost.size())return 0;
        if(dp[ind]!=-1)return dp[ind];
        return dp[ind] = cost[ind]+min(findCost(ind+1,cost),findCost(ind+2,cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        return min(findCost(0,cost),findCost(1,cost));
    }
};