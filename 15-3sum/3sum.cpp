class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>sm;
        set<vector<int> >s;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        // int right=nums[0];
        // int left=nums.size()-1;
        // while(right<=left){
        //     sum.push_back(right+left);
        //     if(sum==0){
        //         s.insert(sum);
        //         }
        //         else if(sum>0){
        //             right++;
        //         }
        //         else{
        //             left--;
        //         }
        // }

                    // if(nums[i]+nums[j]+nums[k]==0){
                    //     vector<int> tp = {nums[i],nums[j],nums[k]};
                    //     sort(tp.begin(),tp.end());
                    //     s.insert(tp);
                    // }
            
        

        for(auto &i : s){
            sm.push_back(i);
        }

        return sm;
        
    }
};