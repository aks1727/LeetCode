class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int> s;
        vector<int> res;
        int l=0;
        int j=0;
        while(l<k)
        {
            s.insert(nums[l++]);
        }
        l--;
        while(l<nums.size())
        {
            res.push_back(*(--s.end()));
            s.erase(s.find(nums[j]));
            j++;
            l++;
            if(l<nums.size())
            {
                s.insert(nums[l]);
            }
        }
        return res;
    }
};