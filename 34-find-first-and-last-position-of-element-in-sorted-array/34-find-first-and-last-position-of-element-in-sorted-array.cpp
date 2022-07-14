class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int>c;
        if(!binary_search(nums.begin(),nums.end(),target))
        {
            c.push_back(-1);c.push_back(-1);
            return c;
        }
        vector<int>::iterator it1,it2;
        it1 = lower_bound(nums.begin(),nums.end(),target);
        it2 = upper_bound(nums.begin(),nums.end(),target);
        c.push_back(it1-nums.begin());
        c.push_back(it2-nums.begin()-1);
        return c;        
    }
};