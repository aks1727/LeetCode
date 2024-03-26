class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> pos;
        unordered_map<int,int> hsh;
        for(auto x : nums)
        {
            if(x>0 and hsh[x]==0)
            {
                pos.push_back(x);
                hsh[x]=1;
            }
        }
        sort(pos.begin(),pos.end());
        int i;
        for(i=0;i<pos.size();i++)
        {
            if(pos[i]!=i+1)return i+1;
        }
        return i+1;
    }
};