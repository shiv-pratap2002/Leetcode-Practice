class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()<=1 or nums[0]==0) return 0;
        int ans=0;
        int l =0, r = 0;
        while(r<nums.size()-1)
        {
            int f = 0;
            for(int i=l;i<r+1;i++)
            {
                f = max(f,i+nums[i]);
            }
            l=r+1;
            r = f;
            ans++;
        }
        return ans;
    }
};