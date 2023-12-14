class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int>  oneRow;
        vector<int> oneCol;
        vector<int> zeroRow;
        vector<int> zeroCol;

        for(int i = 0 ; i < grid.size() ;i++)
        {
            int zero =0;
            int one =0;
            for(int j =0  ; j < grid[0].size() ;j++ )
            {
                if(grid[i][j]==0)zero++;
                else one++;
            }
            oneRow.push_back(one);
            zeroRow.push_back(zero);
        }

        for(int i = 0 ; i < grid[0].size() ;i++)
        {
            int zero =0;
            int one =0;
            for(int j =0  ; j < grid.size() ;j++ )
            {
                if(grid[j][i]==0)zero++;
                else one++;
            }
            oneCol.push_back(one);
            zeroCol.push_back(zero);
        }

        for(int i = 0 ; i < grid.size() ; i++)
        {
            for(int j = 0 ; j < grid[0].size() ;j++)
            {
                grid[i][j] = oneRow[i] + oneCol[j] - zeroRow[i] - zeroCol[j];
            }
        }
        return grid;

    }
};