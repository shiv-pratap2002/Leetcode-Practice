class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int ans=0;
        for(int i = 0; i < nums.size();i++)
        {
            for(int j = i+1;j<nums.size();j++){
                for(int k = j+1;k<nums.size();k++)
                {
                    if(nums[k] - nums[j]==diff and nums[j] - nums[i]==diff)
                    {
                        cout<<nums[k]<<' '<<nums[j]<<' '<<nums[i]<<'\n';
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};