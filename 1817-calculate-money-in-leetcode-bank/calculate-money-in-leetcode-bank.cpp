class Solution {
public:
    int totalMoney(int n) {
        int monday=1;
        int restDay=monday;
        int sum =1;
        for(int i = 1 ; i < n;i++){
            if(i%7==0){
                monday = monday+1;
                restDay=monday;
            }
            else restDay = restDay+1;
            sum+=restDay;
        }
        return sum;
    }
};