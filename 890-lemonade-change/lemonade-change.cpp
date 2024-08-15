class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]!=5)return false;
        
        int cnt5,cnt10,cnt20;
        cnt5 = cnt10 = cnt20 = 0;
        for(int i = 0 ; i < bills.size() ;i++){
            if(bills[i]==5)cnt5++;
            if(bills[i]==10){
                if(cnt5>0){
                    cnt5--;
                    cnt10++;
                }
                else{
                    return false;
                }
            }
            if(bills[i]==20){
                if(cnt10>=1 and cnt5>=1){
                    cnt5--;
                    cnt10--;
                    cnt20++;
                }
                else if(cnt5>=3){
                    cnt5-=3;
                }
                else return false;
            }
        }
        return true;
    }
};