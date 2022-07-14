class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if(n==0)
        {
            return 0;
        }
        int j=n-1;
        int k=0;
        while(nums[j]==val and j>=0)
        {
            j--;
            if(j<0)
            {
                return 0;
            }
        }
        
        for(int i=0;i<=j;i++)
        {
            if(nums[i]==val)
            {
                swap(nums[i],nums[j]);
                j--;
            }
            while(nums[j]==val and j>=0)
            {
                j--;
                if(j<0)
                {
                    return 0;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==val)
            {
                k++;
            }
        }
        return n-k;
    }
};