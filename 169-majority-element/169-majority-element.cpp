bool trp(pair<int,int>p,pair<int,int>q)
    {
        return p.second<q.second;
    }
class Solution {
public:
    // static bool trp(pair<int,int>p,pair<int,int>q)
    // {
    //     return p.second>q.second;
    // }
    int majorityElement(vector<int>& nums) {
        map <int,int>c;
        for(int i:nums)
        {
            c[i]++;
        }
        for(pair<int,int> u: c)
        {
            cout<<u.first<<" "<<u.second<<'\n';
        }
        pair<int,int> p =*(max_element(c.begin(),c.end(),trp));
        return p.first;
    }
};