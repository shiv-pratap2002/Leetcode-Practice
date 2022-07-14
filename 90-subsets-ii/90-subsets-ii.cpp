class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    unsigned int pow_set_size = pow(2, nums.size());
    int counter, j;
    set<vector<int>>s;
    vector<vector<int>>v;
    for(counter = 0; counter < pow_set_size; counter++)
    {
        vector<int>p;
        for(j = 0; j < nums.size(); j++)
        {
            if(counter & (1 << j))
                p.push_back(nums[j]);
        }
        s.insert(p);
    }
        for(auto i : s)
        {
            v.push_back(i);
        }
        return v;
    }
};