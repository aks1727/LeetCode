class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int mx = 0;
        for(int i = 0 ; i < nums.size() ;i++)
        {
            for(int j = 0 ; j < nums[i].size() ;j++)
            {
                mx = max(i+j,mx);
            }
        }
        vector<int> diagonalOrder[mx+1];
        for(int i = 0 ; i < nums.size();i++)
        {
            for(int j = 0 ; j < nums[i].size() ;j++)
            {
                diagonalOrder[i+j].push_back(nums[i][j]);
            }
        }
        vector<int> res;
        for(int i = 0 ; i < mx+1 ;i++)
        {
            reverse(diagonalOrder[i].begin(),diagonalOrder[i].end());
            for(int x : diagonalOrder[i])res.push_back(x);
        }
        return res;
        
    }
};