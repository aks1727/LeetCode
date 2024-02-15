class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long int s=0;
        for(int i : nums) s += i;
        int n = nums.size();
        for(int i = n - 1; i >= 2; i--){
            s -= nums[i];
            if(s > nums[i]){
                return s + nums[i];
            }
        }
        return -1;
    }
};