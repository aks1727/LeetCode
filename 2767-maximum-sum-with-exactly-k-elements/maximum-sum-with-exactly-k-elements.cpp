class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int mx = *max_element(nums.begin(),nums.end());
        int sum = mx;
        for(int i = 0 ; i < k -1;i++)
        {
            mx+=1;
            sum+=mx;
        }
        return sum;
    }
};