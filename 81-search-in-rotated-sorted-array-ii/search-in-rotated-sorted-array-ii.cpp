class Solution {
public:
    bool search(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i < nums.size() ;i++)
        {
            mp[nums[i]]=i;
        }
        if(mp.find(target)!=mp.end())return true;
        return false;
    }
};