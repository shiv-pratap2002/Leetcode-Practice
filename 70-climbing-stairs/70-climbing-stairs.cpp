class Solution {
public:
    vector<int>v = vector<int>(46,-1);
    int climbStairs(int n) {
        if(n==2)
        {
            if(v[n]==-1) v[n] = 2;
        }
        if(n==1)
        {
            if(v[n]==-1) v[n]=1;
        }
        else 
        {
            if(v[n]==-1) v[n] = climbStairs(n-1)+climbStairs(n-2);
        }
        return v[n];
    }
};