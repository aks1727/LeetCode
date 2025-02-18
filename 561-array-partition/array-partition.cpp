class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=0;
        for(int i =0 ; i < nums.size() ;i++){
            if((i&1)==0)x+=nums[i];
        }
        return x;
        
    }
};