class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> c(rowIndex+1);
        for(int i=0;i<rowIndex+1;i++)
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
        return c[rowIndex];

    }
};