class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums)
        {
            mp[x]++;
        }
        int res;
        for(auto &x: mp)
        {
            if(x.second>(nums.size()/2))res=x.first;
        }
        return res;
    }
};