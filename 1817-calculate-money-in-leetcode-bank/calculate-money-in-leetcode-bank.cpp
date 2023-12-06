class Solution {
public:
    int totalMoney(int n) {
        if (n<=7)return n*(n+1)/2;
        int sum=0;
        for(int i=1; n>0 ;i++)
        {
            int k;
            if(n>=7){
                k=7;
                n-=7;
            }
            else {
                k = n;
                n-=n;
            }
            int an = i + k-1;
            // cout<<k<<" "<<i<< " "<<2*i<<" "<<an<<" ";
            sum += (k/2.0)*(i + an);
            // cout<<sum<<endl;
        }
        return sum;
    }
};