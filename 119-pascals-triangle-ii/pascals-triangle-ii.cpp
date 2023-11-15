class Solution {
public:

    vector<int> getRow(int n) {
        vector<vector<int>> res = {{1},{1,1}};
        for(int i=2;i<=n;i++)
        {
            vector<int> v(i+1,1);
            for(int j = 1 ; j<i ;j++)
            {
                v[j]=res[i-1][j-1]+res[i-1][j];
            }
            res.push_back(v);
        }
        return res[n];
    }
};