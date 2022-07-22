class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>sum(nums.size()+1);
        sum[0]=0;
        for(int i=0;i<nums.size();i++)
        {
            sum[i+1]=sum[i]+nums[i];
            cout<<sum[i]<<'\n';
        }
        for(int i=0;i<nums.size();i++)
        {
            int left_sum=sum[i];
            int righ_sum=sum[nums.size()]-sum[i]-nums[i];
            if(left_sum==righ_sum)
            {
                return i;
            }
            cout<<left_sum<<' '<<righ_sum<<'\n';
        }
        return -1;
    }
};