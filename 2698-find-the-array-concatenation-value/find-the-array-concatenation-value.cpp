class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long sum=0;
        int n=nums.size()/2;
        if(nums.size()&1)n+=1;

        for(int i = 0;i<n;i++)
        {
            if(i==nums.size()-1-i)
            {
                sum+=nums[i];
            }
            else{
                sum+=stoi(to_string(nums[i])+to_string(nums[nums.size()-1-i]));
            }
        }
        return sum;
    }
};