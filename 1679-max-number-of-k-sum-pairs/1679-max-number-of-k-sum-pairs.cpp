class Solution {
public:
int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mo;
        for(int i=0;i<nums.size();i++)
        {
            if(k>nums[i])
            mo[nums[i]]++;
        }
        int c=0;
         for(int i=0;i<nums.size();i++)
        {
            
            if(mo[k-nums[i]]>0 and mo[nums[i]]>0)
            {
                mo[k-nums[i]]--;mo[nums[i]]--;
                if(k-nums[i] == nums[i])
                {
                    if(mo[nums[i]]<0)
                    {
                        continue;
                    }
                }
                c++;
            }
        }
        return c;
    }
};