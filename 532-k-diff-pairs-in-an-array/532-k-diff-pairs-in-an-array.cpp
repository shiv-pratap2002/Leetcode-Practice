class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n =  nums.size();
        vector<int>v1(n);
        sort(nums.begin(),nums.end());
        if(k==0)
        {
            map<int,int>m;
            int l=0,p=0;
            while(l<nums.size())
            {
                m[nums[l++]]++;
            }
            for(auto i:m)
            {
                if(i.second>1)
                {
                    p++;
                }
            }
            return p;
        }
        vector<int>::iterator it;
        it = unique_copy(nums.begin(),nums.end(),v1.begin());
        v1.resize(distance(v1.begin(), it));
        set<int>m;
        for(int i=0;i<v1.size();i++)
        {
            m.insert(v1[i]);
            cout<<v1[i]<<' ';
        }
        int l=0;
        for(int i=0;i<v1.size();i++)
        {
            if(m.find(v1[i]+k)!=m.end())
            {
                l++;
            }
        }
        return l;
    }
};