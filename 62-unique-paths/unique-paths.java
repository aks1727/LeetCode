class Solution {
    int dp[][];
    int findPaths(int m,int n){
        if(m<1)return 0;
        if(n<1)return 0;
        if(m==1 && n==1)return 1;
        if(dp[m][n]!=-1) return dp[m][n];
        int ppaths = findPaths(m-1,n);
        ppaths+= findPaths(m,n-1);
        return dp[m][n] = ppaths;
    }
    public int uniquePaths(int m, int n) {
       dp = new int[101][101];
       for (int i = 0; i < dp.length; i++) {
            Arrays.fill(dp[i], -1);
        }
       return findPaths(m,n);
    }
}