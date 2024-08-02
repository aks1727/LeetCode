class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int res=0;
        int i = 1;
        while( i <= mainTank){
            if(i%5==0 && additionalTank>=1){

                mainTank+=1;
                additionalTank-=1;
            }
            res+=10;
            i++;
        }        
        return res;
    }
};