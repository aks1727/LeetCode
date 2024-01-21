class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> res;
        for(auto i : matrix)
        {
            for(int j: i)
            {
                res.push_back(j);
            }
        }
        sort(res.begin(),res.end());
        return res[k-1];
    }
};