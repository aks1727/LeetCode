class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int window = 0;
        for(int x : nums){
            if(x==1)window++;
        }
        int m = INT_MAX;
        int cnt=0;
        for(int i = 0 ; i<window; i++){
            if(nums[i]==0)cnt++;
        }
        m = min(m,cnt);
        for(int i = window ;i<window + nums.size();i++){
            if(nums[i-window]==0){
                cnt--;
            }
            if(nums[i%nums.size()]==0){
                cnt++;
            }
            m = min(m,cnt);
        }
        return m;
        
    }
};