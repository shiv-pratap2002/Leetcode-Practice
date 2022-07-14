class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int sum=nums[0],csum=0;
    for(int i=0;i<nums.size();i++)
    {
        csum+=nums[i];
        if(csum>sum)
        {
            sum=csum;
        }
        if(csum<0)
        {
            csum=0;
        }
    }
        return sum;
    }
};