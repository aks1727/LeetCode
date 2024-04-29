class Solution {
public:
    int addedInteger(vector<int>& num1, vector<int>& num2) {
        int mini=*min_element(num1.begin(),num1.end());
        int mini2=*min_element(num2.begin(),num2.end());
        return (mini2-mini);
    }
};