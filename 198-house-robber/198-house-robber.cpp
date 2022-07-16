class Solution {
public:
    int rob(vector<int>& nums) {
        int l =nums.size();
        
        if(l==1)
        {
            return nums[0];
         }
        if(l==2)
        {
            return max(nums[0],nums[1]);
            
        }
        else
        {
            vector<int>p(l+1,0);
            p[1] = nums[0];
            p[2] = max(nums[0],nums[1]);
            for(int i = 3;i<l+1;i++)
            {
                p[i] = max(nums[i-1]+p[i-2],p[i-1]);
            }
            return p[l];
        }
        
    }
};