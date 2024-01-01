class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size()==0)return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int mx =0;
        int ci = s.size()-1;
        int gi = g.size()-1;
        while(ci>=0 && gi>=0){
            if(s[ci]>=g[gi])
            {
                mx++;
                ci--;
                gi--;
            }
            else{
                gi--;
            }
        }
        return mx;
    }
};