class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        auto feasible=[&](int value) -> bool{
            int count=1;
            int sumo=0;
            for(int i:nums){
                sumo+=i;
                if(sumo>value){
                    sumo=i;
                    count+=1;
                    if(count>k){
                        return false;
                    }
                }
            }
            return true;
};

        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (feasible(mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};