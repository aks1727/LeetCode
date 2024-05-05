class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int i = 0 ,j = nums.size()-1;
        sort(nums.begin(),nums.end());
        while(i<j)
        {
            if(nums[i]*-1 == nums[j])return nums[j];
            else if(nums[i]*-1 >nums[j])i++;
            else j--;
        }
        return -1;
    }
};