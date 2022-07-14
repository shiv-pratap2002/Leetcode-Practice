class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v(nums.size());
        for(int i=0;i<v.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                if(nums[j]>nums[i])
                {
                    v[j]++;
                }
                else if(nums[j]<nums[i])
                {
                    v[i]++;
                }
            }
        }
        return v;
    }
};