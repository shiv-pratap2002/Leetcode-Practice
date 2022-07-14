class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size(),i=0;
        cout<<n<<'\n';
        if(nums[0]==0 and n>1)
        {
            return false;
        }
        else if(n==1)
        {
            return true;
        }
        int re = nums[0];
        while(i<n)
        {
            if(re<nums[i]+i)
            {
                re= nums[i]+i;//position after jump
            }
            if(re>=n-1)
            {
                break;
            }
            if(nums[i]==0 and re==i)
            {
                break;
            }
            i++;
            cout<<re<<' ';
        }
        if(re<n-1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};