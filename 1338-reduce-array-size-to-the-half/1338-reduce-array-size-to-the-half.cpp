struct myComp {
    constexpr bool operator()(
        pair<int, int> const& a,
        pair<int, int> const& b)
        const noexcept
    {
        return a.second < b.second;
    }
};
class Solution {
public:
    
    int minSetSize(vector<int>& arr) {
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,myComp>pq;
        for(auto i:m)
        {
            pq.push(i);
        }
        int s = 0;
        int n = arr.size();
        int i=n;
        while(i>n/2)
        {
            i-=pq.top().second;
            s++;
            pq.pop();
        }
        return s;
    }
};