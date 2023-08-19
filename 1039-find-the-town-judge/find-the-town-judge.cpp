class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> graph(n+1);
        for(int i = 0 ; i < trust.size();i++)
        {
            graph[trust[i][1]].push_back(trust[i][0]);
        }
        int sm = n*(n+1)/2;
        for(int i = 1;i<=n;i++)
        {
            if(sm-i==accumulate(graph[i].begin(),graph[i].end(),0))
            {
                for(int x : graph[i])
                {
                    for(int g: graph[x])
                    {
                        if(i==g)return -1;
                    }
                }
                return i;
            }

        }
        return -1;
    }
};