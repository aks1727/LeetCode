class Solution {
    public void recur(char[] s, int i, int j){
            if(i>=j)return;
            char ch = s[i];
            s[i] = s[j];
            s[j] = ch;
            recur(s,i+1,j-1);
        }
    public void reverseString(char[] s) {
        recur(s,0,s.length -1);
        
    }
}