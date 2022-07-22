class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        map<int,vector<int>>m;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                m[0].push_back(nums[i]);
            }
            else
            {
                m[1].push_back(nums[i]);
            }
        }
        int c = m[0].size();
        int y = m[1].size();
        for(int i=0;i<c;i++)
        {
            nums[i] = (m[0][i]);
        }
        for(int i = 0; i < y; i ++)
        {
            nums[i+c] = (m[1][i]);
        }
        return nums;
    }
};