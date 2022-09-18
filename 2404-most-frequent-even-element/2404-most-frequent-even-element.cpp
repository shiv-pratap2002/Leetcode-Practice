class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0) m[nums[i]]++;
        }
        int maxo=0;int ans;
        for(auto i:m)
        {
            if(maxo<i.second)
            {
                maxo=i.second;
                ans=i.first;
            }
        }
        if(maxo==0) return -1;
        return ans;
    }
};