class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int mx = *max_element(groupSizes.begin(),groupSizes.end());
        vector<vector<int>> graph(mx);
        for(int i=0;i<groupSizes.size() ;i++)
        {
            graph[groupSizes[i]-1].push_back(i);
        }
        vector<vector<int>> res;
        for(int i = 0 ; i < mx;i++)
        {
            vector<int> t;
            for(int j : graph[i])
            {
                if(t.size()==i+1)
                {
                    cout<<endl;
                    res.push_back(t);
                    t={};
                }
                t.push_back(j);
            }
            if(t.size()!=0)res.push_back(t);
        }
        return res;
    }
};