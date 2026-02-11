class Solution {
    public int largestInteger(int[] nums, int k) {
        int hash[] = new int [51];
        Arrays.fill(hash,0);
        Arrays.fill(hash,0);
        for(int i = 0 ; i < nums.length;i++){
            int cnt=0;
            Set<Integer> s = new HashSet<>();
            for(int j =i;j<i+k && j<nums.length;j++){
                if(i+k>nums.length)continue;
                s.add(nums[j]);
            }
            for(int val: s) hash[val]++;
        }
        for(int i  = 50;i>=0;i--){
            if(hash[i]==1)return i;
        }
        return -1;
    }
}