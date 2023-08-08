class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int> idx;
        for(int i = 0 ; i < nums.size() ;i++)
        {
            idx[nums[i]]=i;
        }
        if(idx.find(target)!=idx.end())return idx[target];
        return -1;
    }
};