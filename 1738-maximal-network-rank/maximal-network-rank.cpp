class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>> v(n);
        for(int i = 0 ; i < roads.size() ;i++)
        {
            v[roads[i][0]].push_back(roads[i][1]);
            v[roads[i][1]].push_back(roads[i][0]);
        }
        for(int i= 0 ; i < v.size() ;i++)
        {
            for(int j = 0 ; j < v[i].size() ;j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        int mx = 0;
        for(int i = 0 ; i < v.size();i++)
        {
            for(int k = i+1 ; k < v.size();k++)
            {
                bool isPresentPrevinNext =false;
                bool isPresentNextinPrev =false;
                int s = v[i].size() + v[k].size();
                for(int j = 0 ; j < v[k].size() ;j++)
                {
                    if(i==v[k][j])
                    {
                        isPresentPrevinNext=true;
                        break;
                    }
                }
                for(int j = 0 ; j < v[i].size() ;j++)
                {
                    if(k==v[i][j])
                    {
                        isPresentNextinPrev=true;
                        break;
                    }
                }
                if(!isPresentPrevinNext and !isPresentNextinPrev)
                {
                    if(mx<s)mx = s;
                }
                else{
                    if(mx<s-1)mx=s-1;
                }
            }            
        }
        return mx;
    }
};