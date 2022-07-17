class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3)
        {
            return false;
        }
        int min_1 = INT_MAX,min_2 = INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<min_1)
            {
                min_1 = nums[i];
            }
            if(nums[i]>min_1)
            {
                min_2 = min(nums[i],min_2);
                cout<<min_1<<' '<<min_2<<'\n';
                
            }
            if(nums[i]>min_2)
            {
                return true;
            }
        }
        return false;
    }
};