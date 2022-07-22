class Solution {
public:
   vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>v;
       int n = matrix[0].size();
       int m = matrix.size();
        for(int i=0;i<n;i++)
        {
            vector<int>t;
            for(int j=0;j<m;j++)
            {
                t.push_back(matrix[j][i]);
            }
            v.push_back(t);
        }
        return v;
    }
};