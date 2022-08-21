class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      set<pair<int,int>>s;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    s.insert({i,j});
                }
            }
        }
        for(auto i:s)
        {
            for(int j = 0;j<matrix[0].size();j++)
            {
                matrix[i.first][j]=0;
            }
            for(int k=0;k<matrix.size();k++)
            {
                matrix[k][i.second]=0;
            }
        }
        
    }
};