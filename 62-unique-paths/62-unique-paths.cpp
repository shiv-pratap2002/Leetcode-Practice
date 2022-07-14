class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        int c[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==0 or i==0)
                {
                    c[i][j]=1;
                }
                else
                {
                    c[i][j] = c[i][j-1]+c[i-1][j];
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<c[i][j]<<' ';
            }
            cout<<'\n';
        }
        return c[m-1][n-1];
    }
};