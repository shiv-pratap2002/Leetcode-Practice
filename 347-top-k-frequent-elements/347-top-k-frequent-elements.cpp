class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>>q;
        vector<int>v;
        for(auto i:m)
        {
            q.push(make_pair(i.second,i.first));
        }
        for(int i=0;i<k;i++)
                   {
                       v.push_back((q.top()).second);
                       q.pop();
                   
                   }
                   return v;
    }
};