class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        auto feasible=[&] (int div) -> bool{
            int sum=0;
            for(int i:nums){
                sum+=(i-1)/div +1;
            }
        return sum<=threshold;
};
        int left=1;
        int right=*max_element(nums.begin(),nums.end());
        while(left<right){
            int mid=left+(right-left)/2;
            if(feasible(mid)){right=mid;}
            else{ left=mid+1;}
        }
        return left;
    }
};
