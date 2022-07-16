class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>c;
        for(auto i:nums)
        {
            c[i]++;
            if(c[i]>1)
            {
                return true;
            }
        }
        return false;
    }
};