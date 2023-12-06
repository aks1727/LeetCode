class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int fmax= nums[0],smax=INT_MIN,tmax=INT_MIN;
        bool s = 0;
        for(int i = 0 ; i < nums.size();i++)
        {
            if(nums[i]<fmax and smax<nums[i])smax = nums[i];
        }
        for(int i =0 ; i < nums.size();i++)
        {
            if(nums[i]<fmax and nums[i]<smax and tmax<=nums[i])
            {
                tmax = nums[i];
                s=1;
            }
        }
        if(s!=1)return fmax;
        return tmax;
    }
};