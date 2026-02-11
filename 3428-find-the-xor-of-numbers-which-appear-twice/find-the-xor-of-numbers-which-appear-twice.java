class Solution {
    public int duplicateNumbersXOR(int[] nums) {
        int arr[] = new int[51];
        for(int i : nums){
            arr[i]++;
        }
        int xor =0;
        for(int i = 0 ; i < 51;i++){
            if(arr[i]>1)xor = xor ^ i;
        }
        return xor;
    }
}