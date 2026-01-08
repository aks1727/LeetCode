class Solution {
    public String reversePrefix(String s, int k) {
        char [] arr  = s.toCharArray();
        String tp = "";
        for(int i = k-1; i >=0;i--){
            tp+= String.valueOf(arr[i]);
        }
        for(int i=k;i<arr.length;i++){
            tp+= String.valueOf(arr[i]);
        }

        return tp;
    }
}