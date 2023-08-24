class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        for(int i = 0 ; i < n ;i++)
        {
            cout<<"l ";
            if(nums[i]!=i+1)return false;
        }
        cout<<"o ";
        if(nums[n]!=n)return false;
        return true;
    }
};