class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>res;
        for(int i = 0 ; i <2 ;i++)
        {
            for(int j = 0 ; j  <nums.size() ;j++)
            {
                if(i==0 and nums[j]%2==0)res.push_back(nums[j]);
                else if(i==1 and nums[j]%2==1)res.push_back(nums[j]);
            }
        }
        return res;
    }
};