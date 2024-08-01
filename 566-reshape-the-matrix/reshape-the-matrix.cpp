class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        if(r*c != mat.size()*mat[0].size())return mat;

        vector<vector<int>> res (r,vector<int>(c)) ;
        vector<int> tmp;
        for(auto & x : mat ){
            for(int t : x){
                tmp.push_back(t);
            }
        }
        // cout<<tmp.size()<<endl;
        int k =0;
        for(int i = 0 ; i < r ; i++){
            for(int j  = 0 ; j < c ;j++){
                cout<<k<<endl;
                res[i][j] = tmp[k++];
                // cout<<i<<" "
            }
        }
        return res;
    }
};