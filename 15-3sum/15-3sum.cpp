class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>c;
        for(int i=0;i<nums.size();i++)
        {
            int u=nums[i];
            int l = i+1,r =nums.size()-1;
            if(i>0 and u==nums[i-1]) continue;
            while(l<r)
            {
                if(nums[l]+nums[r]+u<0)
                {
                    l++;
                }
                else if(nums[l]+nums[r]+u>0)
                {
                    r--;
                }
                else{
                    c.push_back({u,nums[l],nums[r]});
                    l++;
                    while(l<nums.size() and nums[l] == nums[l-1]) l++;
                }
            }
        }
        return c;
    }
};