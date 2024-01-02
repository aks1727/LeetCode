class Solution {
public:
    
    bool checkNotEmpty(unordered_map<int,int>& mp)
    {
        for(auto x: mp)
        {
            if(x.second>=1)return true;
        }
        return false;
    }
    
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> matrix;
        unordered_map<int,int> mp;
        for(int x: nums)
        {
            mp[x]++;
        }
        while(checkNotEmpty(mp))
        { 
            vector<int> v;
            for(auto &x : mp)
            {
                if(x.second!=0)
                {
                    v.push_back(x.first);
                    x.second-=1;
                    continue;
                }
            }
            matrix.push_back(v);
        }
        return matrix;
        
    }
};