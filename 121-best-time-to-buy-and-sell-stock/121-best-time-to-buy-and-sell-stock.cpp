class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int profit=0,n=0,mat = INT_MIN,cent = INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
           if(prices[i]<cent)
           {
               cent = prices[i];
           }
            else if(prices[i]-cent>mat)
            {
                mat = prices[i]-cent;
            }
        }
        if(mat<0)
        {
            return 0;
        }
        return mat;
    }
};