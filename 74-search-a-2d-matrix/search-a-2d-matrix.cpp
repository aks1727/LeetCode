class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // cout<<matrix.size();
        for (int i =0 ;i < matrix.size() ; i++)
        {
            int l = 0; 
            int h = matrix[i].size()-1;
            while(l<=h)
            {
                int m = (l+ (h-l)/2);
                if(matrix[i][m]==target)return true;
                else if(matrix[i][m]>target)
                {
                    h = m-1;
                }
                else l = m+1;
            }
        }
        return false;
    }
};