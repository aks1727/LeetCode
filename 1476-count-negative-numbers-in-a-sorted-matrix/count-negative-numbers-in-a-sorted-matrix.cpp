class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        for(int i = 0 ; i < grid.size() ;i++)
        {
            int l = 0;
            int h = grid[0].size()-1;
            while(l<=h)
            {
                int m = l + (h-l)/2;
                if(grid[i][m]>=0)
                {
                    l = m+1;
                }
                else if(grid[i][m]<0)
                {
                    h=m-1;
                }
            }
            cnt = cnt + grid[0].size()-l;
        }
        return cnt;
    }
};