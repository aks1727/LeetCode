class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> check;
        for(int i = 0 ; i < mat.size();i++)
        {
            int c=0;
            for(int j = 0 ; j < mat[i].size();j++)
            {
                if(mat[i][j]==1)c++;
            }
            check.push_back({c,i});
        }
        sort(check.begin(),check.end());
        // for(pair<int,int> a : check)
        // {
        //     cout<<a.first<<" "<<a.second<<endl;
        // }
        vector<int> res(k);
        for(int i=0;i<k;i++)
        {
            res[i] = check[i].second;
        }
        return res;
    }
};