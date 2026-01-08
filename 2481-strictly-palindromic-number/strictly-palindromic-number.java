class Solution {
    String baseConversion(int b, int n ){
        String r = "";
        while(n>0){
            r = r + Integer.toString(n%b);
            n/=b;
        }
        return r;
    }

    boolean isPalindrome(String s){
        for(int i = 0 ; i < s.length()/2;i++){
            if(s.charAt(i)!= s.charAt(s.length()-1 - i)){
                return false;
            }
        }
        return true;
    }

    public boolean isStrictlyPalindromic(int n) {

        for(int i = 2;i<=n-2;i++){
            if(!isPalindrome(baseConversion(i,n))) return false;
        }

        return true;
    }
}