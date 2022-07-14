class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> c(numRows);
        for(int i=0;i<numRows;i++)
        {
            c[i] = vector<int>(i+1);
            for(int j=0;j<i+1;j++)
            {
                if(j==0 or j==i)
                {
                    c[i][j]=1;
                }
                else 
                {
                    c[i][j] = c[i-1][j-1]+c[i-1][j];
                }
            }
        }
        return c;
    }
};