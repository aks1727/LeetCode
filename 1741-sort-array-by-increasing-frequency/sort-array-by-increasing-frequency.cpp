class Solution {
public:

    static bool cmp(pair<int,int> a, pair<int,int> b){
        if(a.first < b.first)return true;
        else if(a.first == b.first){
            return a.second>b.second;
        }
        return false;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i < nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto &x:mp){
            v.push_back({x.second,x.first});
        }
        
        sort(v.begin(),v.end(),cmp);
        int k=0;
        for(int i = 0 ; i < v.size();i++)
        {
            for(int j = 0 ; j < v[i].first ;j++)
            {
                nums[k++] = v[i].second;
            }
        }
        return nums;
    }
};