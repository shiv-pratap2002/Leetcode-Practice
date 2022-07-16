class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int sum=0;
        int j=0;
        int ma = INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                ma=min(ma,i+1-j);
                sum-=nums[j++];
            }
        }
        return (ma==INT_MAX)?0:ma;
    }
};