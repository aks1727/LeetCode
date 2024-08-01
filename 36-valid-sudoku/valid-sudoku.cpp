class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i =0 ; i < board.size();i++){
            unordered_map<int,int> row;
            unordered_map<int,int> col;
            for(int j = 0 ; j < board.size();j++){
                if(board[i][j]!='.')
                row[board[i][j]]++;
                if(board[j][i]!='.')
                col[board[j][i]]++;

                if(row[board[i][j]]>1 or col[board[j][i]]>1){
                    return false;
                }
                // cout<<board[i][j]<<"\t";
            }
            // cout<<endl;
        }
        // cout<<endl;
        int srow=0, scol  =0, erow =3, ecol = 3;
        for(int _  = 0 ; _ < 9;_++){
            unordered_map<int,int> mp;
            for(int i  = srow ; i<erow; i++){

                for(int j = scol ; j < ecol ;j++){
                    // cout<<board[i][j]<<'\t';
                    if(board[i][j]!='.' and ++mp[board[i][j]]>1){
                        return false;
                    }
                }
                // cout<<endl;
            }
                // for(auto &x: mp)cout<<x.first<<" "<<x.second<<endl;
            // cout<<endl<<endl;
            // cout << srow <<scol<<endl;
            // cout<<erow<<ecol<<endl;
            // cout<<_<<endl ;
            if(_==1 or _==0 or _==3 or _==4 or _==6 or _==7 or _==8){scol+=3;ecol+=3;}
            else if(_==2 or _==5){srow+=3;erow+=3;scol=0;ecol=3;}
        }
        return true;
    }
};