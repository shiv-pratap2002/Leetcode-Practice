class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int l=nums[0];
        for(int i =1;i<nums.size();i++)
        {
            l^=nums[i];
        }
        return l;
    }
};