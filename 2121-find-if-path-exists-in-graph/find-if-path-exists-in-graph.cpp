class Solution {
public:

    bool dfs(vector<vector<int>>& graph, int s ,vector<bool>& vis ,int d )
    {
        bool check =false;
        for(int child : graph[s])
        {
            if(child==d)return true;
            if(vis[child])continue;
            vis[child]=true;
            if(dfs(graph,child,vis,d))return true;
        }
        return check;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination)return true;
        vector<vector<int>> graph(n);
        for(int i = 0 ; i < edges.size() ;i++)
        {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool> vis(n+1,0);
        return dfs(graph,source,vis,destination);
    }
};