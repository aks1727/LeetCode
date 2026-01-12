class Solution {

    int dp[][];

    int findPath(int[][]obstacleGrid,int i,int j){
        if(i>=obstacleGrid.length) return 0;
        if(j>=obstacleGrid[i].length)return 0;
        if(obstacleGrid[i][j]==1)return 0;
        if(i==obstacleGrid.length-1 && j==obstacleGrid[i].length-1) return 1;
        if(dp[i][j]!=-1)return dp[i][j];

        int upaths = findPath(obstacleGrid,i+1,j);
        upaths+=findPath(obstacleGrid,i,j+1);
        return dp[i][j] = upaths;

    }

    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        dp = new int[101][101];
        for(int i = 0 ; i < dp.length;i++){
            Arrays.fill(dp[i],-1);
        }
        return findPath(obstacleGrid,0,0);
    }

}