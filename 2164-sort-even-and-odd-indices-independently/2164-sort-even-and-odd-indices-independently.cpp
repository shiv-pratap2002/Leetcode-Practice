class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>v,b;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2)
            {
                v.push_back(nums[i]);
            }
            else
            {
                b.push_back(nums[i]);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        sort(b.begin(),b.end());
        int j=0,k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2)
            {
                nums[i]=v[j++];
            }
            else
            {
                nums[i] = b[k++];
            }
        }
        return nums;
        
    }
};