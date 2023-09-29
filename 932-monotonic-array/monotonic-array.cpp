class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing  = true;
        for(int i = 0 ; i < nums.size()-1 ;i++)
        {
            if(nums[i]>nums[i+1])
            {
                increasing =false;
                break;
            }
        }
        if(increasing)return increasing;
        bool decreasing = true;
        for(int i = 0 ; i < nums.size()-1 ;i++)
        {
            if(nums[i]<nums[i+1])
            {
                decreasing = false;
                break;
            }
        }
        if(decreasing)return decreasing;
        return false;
    }
};