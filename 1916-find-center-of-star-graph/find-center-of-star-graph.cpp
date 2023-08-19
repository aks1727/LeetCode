class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {

        int n = 0;
        for(int i = 0 ; i < edges.size() ;i++)
        {
            if(n<edges[i][0])n=edges[i][0];
            if(n<edges[i][1])n=edges[i][1];
        }
        vector<vector<int>> graph(n+1);
        for(int i = 0 ; i < edges.size();i++)
        {
            graph[edges[i][1]].push_back(edges[i][0]);
            graph[edges[i][0]].push_back(edges[i][1]);
        }
        for(int i = 1;i<=n;i++)
        {
            if(graph[i].size()>1)return i;
        }
        return -1;
    }
};