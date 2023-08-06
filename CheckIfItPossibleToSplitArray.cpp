#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    

    bool canSplitArray(vector<int>& nums, int m) {
        if(nums.size()<=2)return true;
        for(int i = 0 ; i < nums.size()-1 ;i++)
        {
            if(nums[i]+nums[i+1]>=m)return true;
        }
        return false;
    }
};

int main()
{
  int n,m;
  cin >> n >> m;
  vector<int> nums(n);
  for(int i= 0 ; i < n;i++){
    cin >> nums[i];
  }
  Solution obj;
  if(obj.canSplitArray(nums,m))cout<<"True";
  else cout<<"False";
}
