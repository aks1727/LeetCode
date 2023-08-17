class Solution {
public:

    void add(queue<pair<pair<int,int>,int>>& q,int i, int j, int val)
    {
        pair<pair<int,int>,int> p;
        p.first.first = i;
        p.first.second = j;
        p.second = val;
        q.push(p);
        // cout<<p.first.first<<" "<<p.first.second<<" "<<p.second<<endl;
    }

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> vis(mat.size(), vector<int>(mat[0].size(),0));
        vector<vector<int>> res(mat.size(),vector<int>(mat[0].size()));
        for(int i = 0 ; i < mat.size();i++)
        {
            for(int j = 0 ; j < mat[0].size();j++)
            {
                if(mat[i][j]==0)
                {
                    vis[i][j]=1;
                    add(q,i,j,0);
                }
            }
        }
        while(!q.empty())
        {
            int i = q.front().first.first;
            int j = q.front().first.second;
            int val = q.front().second;
            int up = q.front().first.first-1;
            int down  = q.front().first.first+1;
            int left = q.front().first.second-1;
            int right = q.front().first.second+1;
            if(up>=0 and vis[up][j]!=1)
            {
                add(q,up,j,q.front().second+1);
                vis[up][j]=1;
            }
            if(right<=mat[0].size()-1 and vis[i][right]!=1)
            {
                add(q,i,right,q.front().second+1);
                vis[i][right]=1;
            }
            if(left>=0 and vis[i][left]!=1)
            {
                add(q,i,left,q.front().second+1);
                vis[i][left]=1;
            }
            if(down<=mat.size()-1 and vis[down][j]!=1)
            {
                add(q,down,j,q.front().second+1);
                vis[down][j]=1;
            }
            res[i][j]=val;
            q.pop();
        }
        return res;
    }
};