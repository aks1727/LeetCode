class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum = 0;
        int mx  = 0;
        unordered_map<int,int> mp;
        // sum,index

        for(int i = 0 ; i < nums.size() ;i++)
        {
            if(nums[i]==0)
            {
                sum+=-1;
            }
            else sum+=1;
            if(sum==0)
            {
                mx = max(mx,i+1);
            }
            if(mp.find(sum)!=mp.end())
            {
                mx = max(mx,abs(i-mp[sum]));
            }
            else {
                mp[sum] = i;
            }
        }
        return mx ;

    }
};