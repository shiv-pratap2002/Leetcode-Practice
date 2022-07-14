class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
    unsigned int pow_set_size = pow(2, nums.size());
    int counter, j;
    vector<vector<int>>v(pow_set_size);
    for(counter = 0; counter < pow_set_size; counter++)
    {
        for(j = 0; j < nums.size(); j++)
        {
            if(counter & (1 << j))
                v[counter].push_back(nums[j]);
        }
    }
        return v;
    }
};