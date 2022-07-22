class Solution {
public:
   vector<int>v = vector<int>(1004,-1);
    int minCost(vector<int>& cost,int n)
    {
        if(n>=cost.size())
        {
            if(v[n]==-1)
                v[n] =  0;
        }
        else
        {
            if(v[n]==-1)
                v[n] = cost[n] + min(minCost(cost,n+1),minCost(cost,n+2));
        }
        return v[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min(minCost(cost,0),minCost(cost,1));
    }
};