class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        map<int,int>p;
        for(int i = 0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
        }
        for(int i = 0;i<nums2.size();i++)
        {
            p[nums2[i]]++;
        }
        vector<int>df;
        if(nums1.size()>nums2.size())
        {
            for(auto i :p)
            {
                int y = (i.second <= m[i.first])?i.second:m[i.first];
                    for(int j=0;j<y;j++)
                    {
                        df.push_back(i.first);
                    }
            }
        }
        else
        {
            for(auto i :m)
            {
                int y = (i.second <= p[i.first])?i.second:p[i.first];
                    for(int j=0;j<y;j++)
                    {
                        df.push_back(i.first);
                    }
            }
        }
        return df;
    }
};