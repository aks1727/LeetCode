class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        unordered_map<int,int> row;
        unordered_map<int,int> col;
        for(int i = 0 ; i < mat.size() ; i++ )
        {
            int cnt = 0;
            for(int j = 0 ; j < mat[0].size() ;j++)
            {
                if(mat[i][j]==1)cnt++;
            }
            row[i]=cnt;
        }
        
        for(int i = 0 ; i < mat[0].size() ; i++ )
        {
            int cnt = 0;
            for(int j = 0 ; j < mat.size() ;j++)
            {
                if(mat[j][i]==1)cnt++;
            }
            col[i]=cnt;
        }

        int cnt=0;
        for(int i = 0 ; i < mat.size() ;i++)
        {
            for(int j = 0 ; j < mat[0].size() ;j++)
            {
                if(mat[i][j]==1)
                {
                    if(row[i]==1 and col[j]==1)
                    {
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};