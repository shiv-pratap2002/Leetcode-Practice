class Solution {
public:
   int tribonacci(int n) {
        vector<int>c(n+1,0);
        for(int i = 1;i<n+1;i++)
        {
            if(i<=2)
            {
                c[i]=1;
            }
            else
            {
                c[i] = c[i-3]+c[i-2]+c[i-1];
            }
        }
        return c[n];
    }
};