class Solution {
public:
    int totalMoney(int n) {
        int arr[7];
        arr[0]=1;
        int sum =1;
        for(int i = 1 ; i < n;i++){
            if(i%7==0){
                arr[i%7] = arr[i%7]+1;
            }
            else arr[i%7]  = arr[(i%7) -1] +1;
            sum+=arr[i%7];
        }
        return sum;
    }
};