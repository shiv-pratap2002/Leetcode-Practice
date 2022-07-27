class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int>newnums;
        while(nums.size()!=1)
        {
        for(int i=1;i<nums.size();i++)
        {
            newnums.push_back((nums[i]+nums[i-1])%10);
            
            
        }
            nums = newnums;
            newnums.clear();
        }
        return nums[0];
    }
};