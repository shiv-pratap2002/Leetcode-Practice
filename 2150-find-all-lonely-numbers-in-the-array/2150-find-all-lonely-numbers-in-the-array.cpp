class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]==1 and (m[nums[i]+1]==0 and m[nums[i]-1]==0))
            {
               ans.push_back(nums[i]); 
            }
        }
        return ans;
    }
};