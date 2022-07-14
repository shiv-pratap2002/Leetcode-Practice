class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int h,area;
        int ma = INT_MIN;
        int i = 0,j=n-1;
        while(i<j)
        {
            h = (height[i]>height[j])?height[j]:height[i];
            ma = max(h*(j-i),ma);
           if(height[i]>height[j])
           {
               j--;
           }
            else
            {
                i++;
            }
            
        }
        return ma;
    }
};