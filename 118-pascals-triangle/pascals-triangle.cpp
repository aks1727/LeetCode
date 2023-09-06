class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n==1)return {{1}};
        if(n==2)return {{1},{1,1}};
        vector<vector<int>> res = {{1},{1,1}};
        for(int i=2;i<n;i++)
        {
            vector<int> v(i+1,1);
            for(int j = 1 ; j<i ;j++)
            {
                v[j]=res[i-1][j-1]+res[i-1][j];
            }
            res.push_back(v);
        }
        return res;
    }
};