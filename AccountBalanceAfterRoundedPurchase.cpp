#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int accountBalanceAfterPurchase(int p) {
        if(p==0)return 100;
        int m = p%10;
        if(m==5)return 100 -(p+5);
        else if(m>5){
            while(p%10!=0)p++;
            return 100-p;
        }
        else {
            while(p%10!=0)p--;
            return 100-p;
        }
        
    }
};

int main()
{
  int purchaseAmount;
  cin >> purchaseAmount;
  Solution obj;
  cout<<obj.accountBalanceAfterPurchase(purchaseAmount);
}
