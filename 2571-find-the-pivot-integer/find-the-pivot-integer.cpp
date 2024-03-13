class Solution {
public:
    int pivotInteger(int n) {
        int prefix[n+1],suffix[n+1];
        prefix[0] =0;
        suffix[n] = n;
        for(int i = 1 ; i <= n;i++)
        {
            prefix[i] = prefix[i-1] + i;
        }
        for(int j = n-1 ; j>=0 ;j--)
        {
            suffix[j] = suffix[j+1] + j;
        }

        int res = -1;
        for(int i = 0 ; i <=n ;i++)
        {
            if(prefix[i]==suffix[i])
            {
                res = i;
            }
        }
        return res;

    }
};