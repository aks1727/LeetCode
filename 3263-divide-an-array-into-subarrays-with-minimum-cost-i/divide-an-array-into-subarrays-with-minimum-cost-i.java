class Solution {
    public int minimumCost(int[] nums) {
        
        int first = nums[0];
        Arrays.sort(nums);
        if(first!=nums[0] && first!=nums[1] && first!=nums[2]) return first+nums[0]+nums[1];
        return nums[0]+nums[1]+nums[2];
    }
}