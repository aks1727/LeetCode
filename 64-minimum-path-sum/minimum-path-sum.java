class Solution {

    int dp[][];

    int pathSum(int[][] grid,int i , int j){
        if(i>=grid.length)return Integer.MAX_VALUE;
        if(j>= grid[i].length)return Integer.MAX_VALUE;
        if(dp[i][j]!=-1)return dp[i][j];

        int mn  = Math.min(Integer.MAX_VALUE,pathSum(grid,i+1,j));
        mn = Math.min(mn,pathSum(grid,i,j+1));
        if(mn==Integer.MAX_VALUE) return dp[i][j] = grid[i][j];
        return dp[i][j] = mn + grid[i][j];
    }

    public int minPathSum(int[][] grid) {
        dp = new int[201][201];
        for(int i = 0 ; i < 201;i++){
            Arrays.fill(dp[i],-1);
        }
        return pathSum(grid,0,0);
    }
}