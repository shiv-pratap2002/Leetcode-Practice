class Solution {
public:
    vector<vector<int>>v;
    void vo(vector<int>c,int i,int targ,int total,vector<int>&p)
    {
        if(total==targ)
        {
            v.push_back(p);return;
        }
        if(i>=c.size() or targ<total)
        {
            return;
        }
        p.push_back(c[i]);
        vo(c,i,targ,total+c[i],p);
        p.pop_back();
        vo(c,i+1,targ,total,p);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    
        vector<int>p;
        vo(candidates,0,target,0,p);
        return v;
    }
};