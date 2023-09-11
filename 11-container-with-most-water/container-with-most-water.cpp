class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0,h=height.size()-1;
        int mx = 0;
        while(l<=h)
        {
            int a = min(height[l],height[h]) * (h-l);
            if(a>mx )mx =a;
            if(height[l]<height[h])l++;
            else h--;
        }
        return mx;
    }
};