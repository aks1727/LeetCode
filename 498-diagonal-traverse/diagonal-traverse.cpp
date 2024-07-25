class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>>mp;
        vector<int>res;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        bool change=true;
        for(auto &x:mp){
            if(change){
                reverse(x.second.begin(),x.second.end());
            }
            
        for(int i:x.second){
            res.push_back(i);
        }
          change=!change;
       
    }
    
        return res;
    }
};