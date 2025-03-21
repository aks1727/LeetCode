class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> nge(nums.size());
        stack<int> st;
        int n = nums.size();
        for(int i = n*2 ;i>=0 ;i--){
            while(!st.empty() and st.top()<=nums[i%n]){
                st.pop();
            }
            if(st.empty())nge[i%n] = -1;
            else nge[i%n] = st.top();
            st.push(nums[i%n]);
        }
        return nge;
    }
};