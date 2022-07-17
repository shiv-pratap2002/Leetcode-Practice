class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>c;
    int zeros = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                c.push_back(nums[i]);
            }
            else
            {
                zeros++;
            }
        }
        for(int i=0;i<zeros;i++)
        {
            c.push_back(0);
        }
        nums = c;
    }
};