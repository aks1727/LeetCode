class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int s =0;
        for(int i = piles.size()/3 ; i<piles.size() ;i+=2)
        {
            s+=piles[i];
        }
        return s;
    }
};