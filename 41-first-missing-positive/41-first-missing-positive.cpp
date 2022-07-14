class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         set<int>s(nums.begin(),nums.end());
        for(int i=1;i<=500000;i++)
        {
            if(s.find(i)==s.end())
            {
                return i;
            }
        }
        return 500001;
    }
};