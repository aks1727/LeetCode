class Solution {
public:
    int arrangeCoins(int n) {
        int i =1;
        int cnt =0;
        while(n>0)
        {
            cnt++;
            i++;
            n-=i;
        }
        return cnt;
    }
};